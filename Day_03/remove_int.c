#include <stdio.h>

void remove_int(int arr[], int size, int target) {
    int write_index = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] != target) {
            arr[write_index] = arr[i];
            write_index++;
        }
    }
    
    // Fill remaining positions with 0 (optional)
    for (int i = write_index; i < size; i++) {
        arr[i] = 0;
    }
}

// Example usage:
int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;
    
    printf("Before: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    remove_int(arr, size, target);
    
    printf("After: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}