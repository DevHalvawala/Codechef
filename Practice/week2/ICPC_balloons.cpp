#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--!=0)
    {
       int n;
       cin>>n;
       int a[n];
       int c=0;
       for(int i=0;i<n;i++)
       cin>>a[i];
       for(int i=0;i<n;i++)
       {
           switch(a[i])
           {
               case 1:c++;
               break;
               case 2:c++;
               break;
               case 3:c++;
               break;
               case 4:c++;
               break;
               case 5:c++;
               break;
               case 6:c++;
               break;
               case 7:c++;
               break;
           }
           if(c==7)
           {
               c=i;
               break;
           }
       }
       cout<<c+1<<"\n";
    }
    return 0;
}