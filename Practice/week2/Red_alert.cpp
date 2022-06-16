#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
	    int N,H,D;
	    cin>>N>>D>>H;
	    
	    int a[N],sum=0;
	    
	    for(int i=0;i<N;i++)
	    {
	        cin>>a[i];
	        if(a[i]==0)
	        {
	            sum -=D;
	        }
	        else
	            sum +=a[i];
	    }
	    if(sum<=H)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	        cout<<"YES"<<endl;
	}
	return 0;
}
