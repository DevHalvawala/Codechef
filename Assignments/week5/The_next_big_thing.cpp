#include <iostream>
#include <bits/stdc++.h>
#define nbt long long

using namespace std;


int main()
{
  nbt N_dist_integers ;
  cin >> N_dist_integers;
  nbt t[N_dist_integers];
 
  for(int i = 0;i<N_dist_integers;i++)
  {
     cin>>t[i];
  }

	vector<nbt> v2(N_dist_integers, -1);
     
     
	stack<nbt> stack;

	for (nbt i = 0; i < N_dist_integers; i++)
	{
		while (stack.empty() != true && t[stack.top()] < t[i])
		{
			v2[stack.top()] = t[i];
			stack.pop();
		}

		stack.push(i);
	}

	for (nbt i = 0 ;i<N_dist_integers;i++) 
	{
		cout << v2[i] << " ";
	}

	return 0;
}