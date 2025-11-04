#include <stdio.h>

int main() {
	int n, i, x;
	printf("Nhap so luong phan tu trong mang: ");
	scanf("%d", &n);

	int arr[n];
	for (i = 0; i < n; i++) {
		printf("Nhap phan tu thu %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	// Bubble Sort
	for (i = 0; i < n - 1; i++) {
		int swapped = 0;
		for (int j =
