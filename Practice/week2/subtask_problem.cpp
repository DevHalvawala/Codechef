#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        
        int first=0,every=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
           cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                every++;
            }
        }
        if(every==n)
        {
            cout<<"100"<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]==1)
                {
                first++;
                }
                else
                {
                    break;
                }
            }
            if(first>=m)
            cout<<k<<endl;
            else
            cout<<"0"<<endl;
        }
    }
    return 0; 
}