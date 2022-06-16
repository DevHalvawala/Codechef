#include <stdio.h> 

using namespace std;

int main() {
	
	int S;
	scanf("%d", &S);
	while (S--) {
	
		int x, y;
		scanf("%d %d", &x, &y);

		int ans = x + y;
		printf("%d\n", ans);
	}

	return 0;
}