#include <stdio.h>

int sum_digits(int n) {
    int sum = 0;
    
    
    if (n < 0) {
        n = -n;
    }
    
    while (n > 0) {
        sum += n % 10;  
        n /= 10;        
    }
    
    return sum;
}


int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int result = sum_digits(number);
    printf("Sum of digits of %d is: %d\n", number, result);
    
    // Test cases
    printf("Sum of digits of 123 is: %d\n", sum_digits(123));    // 6
    printf("Sum of digits of 4567 is: %d\n", sum_digits(4567));  // 22
    printf("Sum of digits of 0 is: %d\n", sum_digits(0));        // 0
    
    return 0;
}