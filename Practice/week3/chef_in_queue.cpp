#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int *st;
    int *ttop;
};
int isEmpty(struct stack *ptr){
    if(ptr->top ==-1){
        return 1;
    }
    return 0;
}
int isFull(struct stack *ptr){
    if(ptr->top ==ptr->size - 1){
        return 1;
    }
    return 0;
}
void push(struct stack *ptr, int n){
    ptr->top++;
    ptr->st[ptr->top]=n;
}
void push2(struct stack *ptr, int n){
    ptr->ttop[ptr->top]=n;
}
void pop(struct stack *ptr){
    ptr->top--;
}

int main() {
	// your code goes here
	int n,k;
	int f=1;
	
	scanf("%d%d",&n,&k);
	int a[n];
	
	for(int i=0;i<n;i++){
	    scanf("%d",&a[n]);
	}
	
	struct stack *s1=(struct stack *)malloc(sizeof(struct stack));
	s1->size=n;
	s1->top=0;
	s1->st=(int *)malloc(sizeof(int)*n);
	s1->st[s1->top]=a[0];
	s1->ttop=(int *)malloc(sizeof(int)*n);
	s1->ttop[s1->top]=0;
	int pos;
	
	for(int i=1;i<n;i++){
	    while(s1->st[s1->top]>a[i] && !isEmpty(s1)){
	        pos=i-s1->ttop[s1->top]+1;
	        f=(f*pos)%1000000007;
	        pop(s1);
	    }
	    if(s1->st[s1->top]<=a[i]||isEmpty(s1)){
	        push(s1,a[i]);
	        push2(s1,i);
	        continue;
	    }
	}
	printf("%d",f);
	return 0;
}

