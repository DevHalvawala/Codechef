/*
Input
The first line of the input contains an integer T denoting the number of test cases.
The first line of each test case contains an integer N denoting the number of elements in the array.
The second line contains N space-separated integers A1, A2, ..., AN denoting the array A.

Output
For each test case, output a single line containing the answer.
Note
A subsequence with only a single integer is also an alternating subsequence.

Input
1
3
1 2 5

Output
6


Explanation
Example case 1.
For the given array [1, 2, 5], there are 7 non-empty subsequences out of which there are 4 alternating subsequences. These will be {[1], [2], [5], [1, 5]}. The alternating subsequence [1, 5] will have the largest sum i.e 6.

*/
#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
      int n;//n=number_of_elements
      cin>>n;

      int even=0;
      int odd=0;
      int arr[n];

      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }

      int output=0;
      for(int i=0;i<n;i++)
      {
          if(i%2==0)
          {
              even+=arr[i];
          }
          else
          {
              odd+=arr[i];
          }
      }
      output= odd>even ? odd:even;
      cout<<output<<endl;
  }
  return 0;
}