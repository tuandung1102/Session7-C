#include <stdio.h>

int main(){
	int n;
	printf("Moi ng dung nhap vao so phan tu cua mang: ");
	scanf("%d", &n);
	if (n<0){
		printf("So phan tu phai lon hon 0 \n");
		return 1;
	
	}
	int arr [n];
	
	printf("Nhap cac phan tu cua mang:\n");
	for (int i=0;i<n;i++){
		printf("Nhap phan tu thu %d:", i+1);
		scanf("%d", &arr[i]);
	}
    

		for (int i=0;i<n;i++){
				if ((arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%5!=0 && arr[i]%7!=0 && arr[i] !=1) || arr[i]==2 || arr[i]==3 || arr[i]==5 || arr[i]==7){
						printf("Cac phan tu trong mang la so nguyen to la: %d\n", arr[i]);
				}
		
			
		}
	
		return 0;
	}

