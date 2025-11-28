#include <stdio.h>

void reverse_array(int arr[]) {
    printf("Reversed array: ");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

