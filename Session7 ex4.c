#include <stdio.h>


int main() {
    int n;

   
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("So phan tu phai lon hon 0.\n");
        return 1; 
    }

   
    int arr[n]; 
    
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

  
    printf("\nCac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: %d\n", i + 1, arr[i]);
    }

    return 0;
}

