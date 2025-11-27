#include <stdio.h>

int if_insert_pos(int arr[], int size, int n) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == n) {
            return i;  // Found, return index
        }
        if (arr[i] > n) {
            return i;  // Not found, return position where it should be inserted
        }
    }
    return size;  // Not found and larger than all elements
}

// Example usage (assuming sorted array for insertion position):
int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Test cases
    printf("Search for 5: %d\n", if_insert_pos(arr, size, 5));  // Found at index 2
    printf("Search for 4: %d\n", if_insert_pos(arr, size, 4));  // Not found, should be at index 2
    printf("Search for 0: %d\n", if_insert_pos(arr, size, 0));  // Not found, should be at index 0
    printf("Search for 10: %d\n", if_insert_pos(arr, size, 10)); // Not found, should be at index 5
    
    return 0;
}