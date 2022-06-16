#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long long 

int main(){
    //ios::sync_with_stdio(0), cin.tie(0);

    int m1; 
    cin>>m1; 
    int e=m1;
    vector<int> v1, v2;
    vector<string> v3;
    string t;

    while(e--){
        int i1, i2; 
        cin>>i1>>i2;

        string s; 
        cin>>s;

        char c; 
        cin>>c;

        t.push_back(s[s.size()-1]);
        t.push_back(c);
        v3.push_back(t);

        t="";

        v1.push_back(i1);
        v2.push_back(i2);
    }

    vector<pair<int, string>> x, y;

    for(int i=0; i<m1; i++){
        x.push_back(make_pair(v1[i], v3[i]));
        y.push_back(make_pair(v2[i], v3[i]));
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    int cnt=0;
    for(int i=0; i<m1-1; i++){

        if(x[i].first==x[i+1].first){

            for(int j=0; j<m1-1; j++){

                if(y[j].first==y[j+1].first && y[j].first==x[i].first){

                    if(x[i].second==y[j].second && x[i+1].second==y[j+1].second){

                        cnt++;
                    }
                }   
            }
        }
    }
    cout<<cnt;
    return 0;
}