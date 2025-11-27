#include <stdio.h>

void f_tableau_multi(int n) {
    printf("Multiplication table for %d:\n", n);
    printf("----------------------------\n");
    
    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

// Example usage:
int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    f_tableau_multi(number);
    
    return 0;
}