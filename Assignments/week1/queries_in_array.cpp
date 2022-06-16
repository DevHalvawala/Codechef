/*Problem
Chef has an array a consisting of positive integers. This array is sorted in non-decreasing order from left to right. You are given Q queries. Each query consists of three integers l,r,x. The answer to this query can be found as follows. Consider the subarray al,al+1,…,ar. The answer to the query is the count of numbers in this subarray that are greater than or equal to x.

Input
The first line of each test case contains two space-separated integers n,Q.
The second line contains n space separated integers denoting the array a.
Each of the next Q lines contains three space-separated integers l,r,x denoting the query.

Output
Q lines one for each query containing the answer for the corresponding query.

Input  
5 6
1 2 3 6 9
1 5 1
1 5 3
1 5 10
1 4 4
2 5 4
2 5 1

 Output 
5
3
0
1
2
4

Explanation
For the first query, all the elements of the array are ≥1. Thus, the answer is 5.
For the second query, the answer will be 3, as the elements 3,6,9 are ≥3.

*/
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main() {
    int n,Q;
    cin>>n>>Q;
    
    long arr1[n];
    long arr2[3];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    while(Q--)
    {
        int result=-1;
        for(int i=0;i<3;i++)
        {
            cin>>arr2[i];
        }
        int start=arr2[0]-1;
        int end=arr2[1]-1;
        
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(arr1[mid]>=arr2[2])
            {
                result=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        if(result!=-1)
        {
            cout<<(arr2[1]-result)<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }  
    return 0;
}