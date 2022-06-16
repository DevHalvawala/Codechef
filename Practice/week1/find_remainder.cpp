#include <stdio.h> 

using namespace std;

int main() {
	
	int S;
	scanf("%d", &S);
	while (S--) {
		// Read the input num1 and num2
		int num1, num2;
		scanf("%d %d", &num1, &num2);

		// Compute the ans.
		int ans = num1%num2;
		printf("%d\n", ans);
	}

	return 0;
}