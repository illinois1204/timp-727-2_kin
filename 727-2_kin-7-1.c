#include <stdio.h>
#include <stdlib.h>

int sorting_function(int* arr, int arr_left, int arr_right) {
	int pivot;
	int l = arr_left; 
	int r = arr_right;
	pivot = arr[(l + r) / 2];

	while (l <= r) {
		while (arr[l] < pivot) {
			l++;
		} while (arr[r] > pivot) {
			r--;
		}
		if (l <= r) {
			if (l < r) {
				int temp;
				temp = arr[l];
				arr[l] = arr[r];
				arr[r] = temp;
			} l++; r--;
		}
	}
	
	if (l < arr_right)
		sorting_function(arr, l, arr_right);
	if (arr_left < r)
		sorting_function(arr, arr_left, r);
}

int main() {
	int n, k;
	scanf("%d", &n);
	int m[n];

	for (k = 0; k < n; k++) {
		scanf("%d", &m[k]);
	}

	sorting_function(m, 0, n-1);
	
	for (k = 0; k < n-1; k++) {
		printf("%d ", m[k]);
	}
	printf("%d\n",m[n-1]);
	return 0;
}
