#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

    int testcases,N;
    cin>>testcases;

    while(testcases--){

        cin>>N;

        long S[N];
        long diff=1000000000;

        for(int i = 0; i < N; i++){
            cin>>S[i];
        }
        sort(S,S+N);
        for(int i = 0; i < N; i++){
            long X =abs(S[i]-S[i+1]);

            if(X < diff){
                diff = X;
            }
        }
        cout<<diff<<endl;
    }
    return 0;
}