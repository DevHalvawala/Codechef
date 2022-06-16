#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	
	int q;
	cin>>q;
	stack<int> s;
	
	while(q--){
	    int a;
	    cin>>a;
	    if(a==1){
	        int n;
	        cin>>n;
	        s.push(n);
	    }
	    else if(a==-1 && !s.empty()){
	        cout<<(s.top())<<endl;
	        s.pop();
	    }
	    else{
	        cout<<"kuchbhi?"<<endl;
	    }
	}
	return 0;
}
