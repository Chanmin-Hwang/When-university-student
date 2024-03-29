#include <stdio.h>
#include <stdlib.h>

int compare(const void* p, const void* q) {
	return *(int*)p - *(int*)q;
}

int unique(int* arr, int size) {
	int j = 0;
	for (int i = 1; i < size;i++) {
		if (arr[j] == arr[i]) continue;
		arr[++j] = arr[i];
	}
	return ++j;
}

int binarysearch(int* arr, int size, int key) {
	int left = 0, right = size - 1, mid;
	while (left <= right) {
		mid = (left + right) / 2;
		if (arr[mid] < key) left = mid + 1;
		else if (arr[mid] > key) right = mid - 1;
		else return mid;
 	}
}

int main(void) {
	int n;
	scanf("%d", &n);

	int* arr = (int*)calloc(n, sizeof(int));
	int* sort = (int*)calloc(n, sizeof(int));

	for (int i = 0; i < n;i++) {
		scanf("%d", &arr[i]);
		sort[i] = arr[i];
	}

	qsort(sort, n, sizeof(int), compare);

	int cnt = unique(sort, n);
	for (int i = 0;i < n;i++) {
		int tmp = binarysearch(sort, cnt, arr[i]);
		printf("%d ", tmp);
	}
	free(arr);
	free(sort);

	return 0;
}