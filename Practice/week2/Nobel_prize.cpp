#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        // int total_fields;
        // cin>>total_fields;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int c=0;
        
        for(int i=1;i<n;i++){
            if(a[i-1]!=a[i]){
                c++;
            }
        }
        if(c+1<m){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}