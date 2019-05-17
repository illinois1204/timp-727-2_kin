#include <stdio.h>

int main() {
	int n;
	int x;
	int S = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		S += x;
	}
	printf("%d \n", S);
	return 0;
}
