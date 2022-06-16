
        #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int Tcases;
	cin>>Tcases;
	while(Tcases--){
	    
	    int no_sticks;
	    cin>>no_sticks;
	    int A[no_sticks];
	    
	    for(int i=0;i<no_sticks;i++){
	        cin>>A[i];
	    }
	    sort(A,A+no_sticks);
	    int result[2]={-1,-1},s=0;
	    
	    for(int i=no_sticks-1;i>=0;i--){
	        
	        if(A[i]==A[i-1]){
	            result[s]=A[i];
	            s++;
	            i--;
	        }
	        if(s==2){
	            break;
	        }
	    }
	    if(result[0]>0 && result[1]>0){
	        cout<<result[0]*result[1]<<endl;
	    }
	    else{
	        cout<<"-1"<<endl;
	    }
	}
	return 0;
}