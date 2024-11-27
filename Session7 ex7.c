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

   
    printf("Nhap cac phan tu cua mang (chi nhan so le):\n");
    for (int i = 0; i < n; i++) {
        do {
            printf("Nhap phan tu thu %d: ", i + 1);
            scanf("%d", &arr[i]);

            if (arr[i] % 2 == 0) {
                printf("Gia tri nhap vao phai la so le. Vui long nhap lai!\n");
            }
        } while (arr[i] % 2 == 0); 
    }

    printf("\nCac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

