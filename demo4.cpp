#include <stdio.h>

int linearSearch(int arr[], int n, int x) {
	for (int i = 0; i < n; i++)
		if (arr[i] == x) return i;
	return -1;
}

int main() {
	int n, arr[1000], x;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("Phan tu %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	printf("Nhap gia tri can tim: ");
	scanf("%d", &x);

	int pos = linearSearch(arr, n, x);
	if (pos != -1)
		printf("Tim thay %d o vi tri %d\n", x, pos + 1);
	else
		printf("Khong tim thay!\n");

	return 0;
}
