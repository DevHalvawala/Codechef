/*Problem
Given a string of length N, find if we can make the string sorted by performing at most one swap. A swap involves taking any two characters present in the string and interchanging their positions in the string.
A string is sorted if all letter 'a' appear before all letter 'b', all letter 'b' appear before all letter 'c' and so on.

Input
First line will contain T, the number of testcases. Then the testcases follow.
Each testcase consists of two lines, the first line containing a single integer N denoting the length of the string, and the second line containing the string.

Output
For each test case, print "YES" (without quotes) if you can make the string sorted using at most one swap, otherwise print "NO" (without quotes).

Input
2
4
acbd
4
adbc

Output
YES
NO



*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int testcase;//T, the number of testcases
    cin>>testcase;

    while(testcase--){
        int s;//first line containing a single integer N
        cin>>s;

        string length;//second line containing the string.
        cin>>length;

        string check=length;
        sort(check.begin(), check.end());
        int swapping =0;

        for(int i=0;i<s;i++){
            if(length[i] != check[i]){
                swapping++;
            }
        }
        if(swapping<=2){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}