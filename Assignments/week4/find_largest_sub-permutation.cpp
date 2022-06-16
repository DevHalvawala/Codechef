// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int testcases;
//     cin>>testcases;

//     while (testcases--){
//         int d;
//         cin>>d;

//         int A[d];

//         for(int i=0; i<d; i++){
//             cin>>A[i];
//         }
//         sort(A,A+d);

//     }
// }
/*Problem
Given two arrays(A and B) of the same size n, find the length of the longest range [l,r] such that the subarrays  Al,Al+1…Ar and Bl,Bl+1…Br are permutations of each other. Two arrays are said to be permutations of each other, if you can rearrange the elements of the first array to obtain the second array. An equivalent definition is that the number of occurrences of every number should be equal in both arrays.
If there does not exist such a range [l,r] then print 0.

Input
First line contains a single integer T, the number of testcases
First line of each testcase contains a single integer n, the size of each array
Second line of each testcase contains n space separated integers, the elements of the array A
Third line of each testcase contains n space separated integers, the elements of the array B

Output
Print a single line for each testcase, the answer to the question.

Input
3
3
1 2 3
4 5 6
3
1 2 3
3 1 2
4
1 2 3 5
3 2 5 3

Output
0
3
3



*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool Permutation(int a[], int b[], int n, int start, int end) {
    int l = end - start + 1;
    int x[l], y[l];
    for(int i = 0; i < l; i++) {
        x[i] = a[start + i];
        y[i] = b[start + i];
    }

    sort(x, x + l);
    sort(y, y + l);

    bool isE = true;
    for(int i = 0; i < l; i++) {
        if(x[i] != y[i]) {
            isE= false;
            break;
        }
    }

    if(isE) {
        return true;
       
    }
    else {
        return false;
       
    }
}

void run() {
    ll n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    int m = 0;
    for(int i = 0; i < n; i++)
        for(int j = i; j < n; j++)
            if(Permutation(a, b, n, i, j))
                m = max(m, j - i + 1);
   
    cout << m << endl;
}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        run();
        }
    return 0;
}