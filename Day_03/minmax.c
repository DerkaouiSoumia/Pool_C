#include <stdio.h>
#include <limits.h>

void min_max(int arr[], int size, int *min, int *max) {
    if (size <= 0) {
        *min = *max = 0;
        return;
    }
    
    *min = INT_MAX;
    *max = INT_MIN;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}


int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;
    
    min_max(arr, size, &min, &max);
    printf("Min: %d, Max: %d\n", min, max);
    
    return 0;
}