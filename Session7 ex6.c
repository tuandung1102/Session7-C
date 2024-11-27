#include <stdio.h>

int main() {
    
    int arr[5] = {1, 2, 3, 4, 5};

    
    printf("Mang ban dau: [");
    for (int i = 0; i < 5; i++) {
        printf("%d", arr[i]);
        if (i < 4) {
            printf(", ");
        }
    }
    printf("]\n");

    
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] += 3; 
        } else {
            arr[i] += 2; 
        }
    }


    printf("Mang sau khi thay doi: [");
    for (int i = 0; i < 5; i++) {
        printf("%d", arr[i]);
        if (i < 4) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}

