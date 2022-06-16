#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    long long a,b;
	    cin>>a;
	    cin>>b;
	    long long gcd=__gcd(a,b);
	    cout<<gcd<<" ";
	    cout<<(a*b)/gcd<<endl;
	}
	return 0;
}
