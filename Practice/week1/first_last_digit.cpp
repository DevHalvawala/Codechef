#include <iostream>
using namespace std;

int main() {
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
	    int n,ans=0,first=0;
	    scanf("%d",&n);
	    ans+=n%10;
	    while(n>0){
	        first=n%10;
	        n/=10;
	    }
	    ans+=first;
	    printf("%d\n",ans);
	}
	return 0;
}