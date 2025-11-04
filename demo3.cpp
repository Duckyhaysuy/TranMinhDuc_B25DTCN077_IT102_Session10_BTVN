#include<stdio.h>
int main(){
	int i,n,x,found =0;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d",&n);
	
	int arr[1000];
	for(i=0;i<n;i++){
		printf("Nhap phan tu theo thu tu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("\nCac phan tu trong mang la: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	printf("\nNhap gia tri can tim: ");
	scanf("%d",&x);
	
	for(i=0;i<n;i++){
		if(arr[i]==x){
			found =1;
			break;
		}
	}
	if(found){
		printf("Tim thay gia tri %d.");
	}else{
		printf("Khong tim thay gia tri.");
	}
	return 0;
}
