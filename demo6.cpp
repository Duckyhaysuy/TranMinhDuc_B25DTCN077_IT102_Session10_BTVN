#include <stdio.h>

int main (){
	int n , i ;
		printf("Nhap so luong phan tu trong mang :") ;
		scanf("%d" , &n);
		
	int arr[n] ;
	for (int i = 0 ; i < n ; i++){
		printf("Nhap phan tu thu %d :" , (i+1));
		scanf("%d" , &arr[i]);
	}
	
	for(i = 0 ; i < n ; i++){
		int swapped = 0 ;
		
		for(int j = 0 ; j < n - i -1 ; j++ ){
			if(arr[j] > arr[j + 1]){
			int temp = arr[j] ;
			arr[j] = arr[j+1] ;
			arr[j+1] = temp ;	
			swapped = 1 ;
			}
		}
		if (swapped == 0 ){
		break ;
	}
	}
	
	printf("Mang da sap xep la :");
	for(int i = 0 ; i < n ; i++){
		printf("%d " , arr[i]);
	}
	
	return 0 ;
}
