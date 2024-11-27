#include <stdio.h>

int main() {
    
    int arr[5] = {3, 7, 12, 9, 14}; 
    int hasEven = 0; 

    
    printf("Cac so chan trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) { 
            printf("%d ", arr[i]);
            hasEven = 1; 
        }
    }

    
    if (!hasEven) {
        printf("Mang khong chua so chan.");
    }

    return 0;
}

