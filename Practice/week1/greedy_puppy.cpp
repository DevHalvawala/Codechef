#include <iostream>
using namespace std;

int main(void) {
	int T;
	cin>>T;
	while(T--){
	    fflush(stdin);
	    int N;
	    int K;
	    int i,max;
	    cin>>N>>K;
	    max=N%2;
	    for(i=2;i<=K;i++){
	        if(N%i>max)
	        {
	            max=N%i;
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
