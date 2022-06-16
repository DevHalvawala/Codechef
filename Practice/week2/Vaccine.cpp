#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,p,x,y;
        cin>>n>>p>>x>>y;

        int child=0;
        int elder=0;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<p;i++){
            
        if(a[i]==0){
            child+=x;
        }
        if(a[i]==1){
            child+=y;
        }
    }
    int total=child+child;
    cout<<total/2<<endl;
  }
  return 0;
}