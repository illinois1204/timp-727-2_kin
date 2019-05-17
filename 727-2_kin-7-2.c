#include <stdio.h>
#include <stdlib.h>

int heapsort(int *numbers, int root, int size)
{
	int maxChild;
	int done = 0;
	while ((root * 2 <= size) && (!done))
	{
		if (root * 2 == size) {
			maxChild = root * 2;
		}
		else if (numbers[root * 2] > numbers[root * 2 + 1]) {
			maxChild = root * 2;
		}
		else {
			maxChild = root * 2 + 1;
		}
		if (numbers[root] < numbers[maxChild])
		{
			int temp = numbers[root];
			numbers[root] = numbers[maxChild];
			numbers[maxChild] = temp;
			root = maxChild;
		}
		else
			done = 1;
	}
}

int sorting_function(int *numbers, int array_size)
{
	for (int i = (array_size / 2) - 1; i >= 0; i--)
		heapsort(numbers, i, array_size);
	for (int i = array_size - 1; i >= 1; i--)
	{
		int temp = numbers[0];
		numbers[0] = numbers[i];
		numbers[i] = temp;
		heapsort(numbers, 0, i - 1);
	}
}
int main() {
	int n, i;
	scanf("%d", &n);
	int m[n];

	for (i = 0; i < n; i++) {
		scanf("%d", &m[i]);
	}
	sorting_function(m, n);

	for (i = 0; i < n - 1; i++) {
		printf("%d ", m[i]);
	}
	printf("%d\n", m[n - 1]);
	return 0;
}
