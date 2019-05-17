#include <stdio.h>

int main() {
	int n;
	int x;
	int S = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &x);
		S += ((i+1) % 2)*(pow(x, 3));
	}
	printf("%d \n", S);
	return 0;
}
