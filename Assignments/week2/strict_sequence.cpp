/*
Strict Sequence
Given an array A consisting of N distinct positive integers. You have to check whether this array is strictly increasing or strictly decreasing. Output Yes if the array is either strictly increasing or strictly decreasing, otherwise output No.
Input
First line contain an integer N denoting the size of array
Next line contains N space separated integers denoting the array.
Output
Print either Yes or No.
Constraints
1 ≤ N ≤ 105
1 ≤ Ai ≤ 105
Information to Score Partial Points
For 30% of score it is guaranteed that N ≤ 500
For rest 70% score , original constraints are applicable.
Input:
4
1 2 3 4
Output:
Yes
Explanation
Since, the elements are in increasing order, the answer will be Yes.
Input:
4
1 5 3 4
Output:
No
Explanation
Since the elements are neither in increasing or decreasing order, the answer will be No.
*/
#include <iostream>
using namespace std;

int main() {
 // your code goes here
 
 int n;
 cin >> n;
 
 int arr[n];
 
 for(int i = 0; i < n; i++)
 {
     cin >> arr[i];
 }
 if(arr[0] < arr[1])
 {
     int count = 1;
     
     for(int i = 0; i < n; i++)
     {
         if(arr[i] < arr[i + 1])
         {
             count++;
         }
     }
     if(count == n)
     {
         cout << "No" << endl;
     }
     else
     {
         cout << "Yes" << endl;
     }
 }
 else if(arr[0] > arr[1])
 {
     int count = 1;
     
     for(int i = 0; i < n; i++)
     {
         if(arr[i] < arr[i + 1])
         {
             count++;
         }
     }
     if(count == n)
     {
         cout << "No" << endl;
     }
     else
     {
         cout << "Yes" << endl;
     }
 }
 else
 {
     cout << "No" << endl;
 }
 
 return 0;
}