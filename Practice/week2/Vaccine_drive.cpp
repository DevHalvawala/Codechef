// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;

//     while(t--){
//         int g,p;
//         cin>>g>>p;
        
//         int days=0;
//         int a[11];
//         for(int i=1;i<=10;i++){
//             cin>>a[i];
//         }
//         for(int j=10;j<g;j--){
//             days+=a[j]/p;
//             a[j-1]+=a[j]%p;
//         }
//         int min=days+1;
//         int max=days+(a[g]+p-1)/p;

//         cout<<min<<" "<<max<<endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        long long int g,p,x,sum=0,min,max;
        cin>>g>>p;
        long long int a[10];

        for(int i=0;i<10;i++){
            cin>>a[i];
        }
        x=a[g-1];
        for(int i=9;i>=g;i--){
            sum+=a[i];
        }
        min=(sum/p)+1;
        if((sum+x)%p==0){
            max=((sum+x)/p);
        }
        else{
            max=((sum+x)/p)+1;
        }
        cout<<min<<" "<<max<<endl;
        
    }
    return 0;
}