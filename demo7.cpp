#include <stdio.h>

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	int length = sizeof(arr) / sizeof(arr[0]);
	int n, found = -1;

	printf("Mang: ");
	for (int i = 0; i < length; i++)
		printf("%d ", arr[i]);

	printf("\nNhap gia tri can kiem tra: ");
	scanf("%d", &n);

	int top = 0, bot = length - 1;
	while (top <= bot) {  // S?a t? < thành <=
		int mid = (top + bot) / 2;
		if (arr[mid] == n) {
			found = mid;
			break;
		} else if (n > arr[mid]) {
			top = mid + 1;
		} else {
			bot = mid - 1;
		}
	}

	if (found == -1)
		printf("Khong tim thay!\n");
	else
		printf("Phan tu %d o vi tri %d\n", n, found);

	return 0;
}
