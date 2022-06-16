#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int s;
        cin>>s;

        int totalsum=0;
        int a[10];

        for(int i=0;i<s;i++){
            cin>>a[i];
        }
        int n;
        
        for(int i=0;i<s;i++){
            int sum=0;
            cin>>n;
            for(int j=0;j<n;j++){
                int b;
                cin>>b;
                sum+=b-a[i];
            }
            sum+=a[i];
            totalsum+=sum;
        }
        cout<<totalsum<<endl;
    }
    return 0;
}