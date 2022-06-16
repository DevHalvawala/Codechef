#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n_sticks,difference;
    int i,j,k;
    int p=0;
    cin>>n_sticks>>difference;
    int A[n_sticks];

    for(int i=0;i<n_sticks;i++){
        cin>>A[i];
    }

    sort(A,A+n_sticks);

    for(int i=0;i<n_sticks-i;){
        if(A[i+1]-A[i]<=difference)
        {
            p=p+1;
            i=i+2;
        }
        else 
        i++;
    }
    
    cout<<p<<endl;
    return 0;
}