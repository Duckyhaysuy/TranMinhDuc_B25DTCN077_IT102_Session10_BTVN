#include <stdio.h>

int main() {
	int n, x, count = 0;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);

	int arr[n];
	for (int i = 0; i < n; i++) {
		printf("Phan tu %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	printf("Nhap gia tri can kiem tra: ");
	scanf("%d", &x);

	for (int i = 0; i < n; i++)
		if (arr[i] == x) count++;

	if (count)
		printf("Phan tu %d xuat hien %d lan trong mang\n", x, count);
	else
		printf("Phan tu khong ton tai!\n");

	return 0;
}
