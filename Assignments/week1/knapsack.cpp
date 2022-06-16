/*Input
The first line of input contains T, number of test cases in a file.
The next line contains three integers, N, C and K, as described in the problem statement.
The next line contains N space separated integers, denoting Wi, i.e. weight of the object.

Output
For test case, output the maximum number of objects you can pick.

 Input
2
5 5 5
5 4 3 2 1
5 5 4
1 4 1 1 1

 Output
2
2

EXPLANATION
In first case, we can only pick objects with weights {3,2} such that the sum of weight is at least 5 and it doesn't exceed total capacity of bag (i.e. 5).
In second test case, there are multiple optimal choices. We can choose the first two elements, {1,4}, as it satisfies the criteria of weight being at least 4 and sum of weights not exceeding 5. Or we could also choose the second and third element. Note, since objects were to be picked consecutively, {1,1,1,1} is not an accepted solution.

*/
#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t-- > 0){
      int N,K,C;
      cin>>N>>C>>K;
      
      long int w[N];
      for(int i=0;i<N;i++){
      cin>>w[i];
      }
      int max=0;
      int count=0;
      
      for(int i=0;i<N;i++){
          int sum=0;
          for(int j=i;j<N;j++){
              sum=sum+w[j];
              
              if(sum >= K && sum <= C && ((j-i)+1)>count)
              count=((j-i)+1);
              if(sum > C)
              break;
          }
      }
      cout<<count<<endl;
  }
  return 0;
}