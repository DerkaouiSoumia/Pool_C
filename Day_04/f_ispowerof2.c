#include <stdio.h>

int f_ispowerof2(int x) {
   
    if (x <= 0) {
        return 0;
    }
    
   
    return (x & (x - 1)) == 0;
}


int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (f_ispowerof2(number)) {
        printf("%d is a power of 2\n", number);
    } else {
        printf("%d is NOT a power of 2\n", number);
    }
    
   
    
    printf("1 is power of 2: %s\n", f_ispowerof2(1) ? "Yes" : "No");      // Yes
    printf("2 is power of 2: %s\n", f_ispowerof2(2) ? "Yes" : "No");      // Yes
    printf("4 is power of 2: %s\n", f_ispowerof2(4) ? "Yes" : "No");      // Yes
    printf("8 is power of 2: %s\n", f_ispowerof2(8) ? "Yes" : "No");      // Yes
    printf("3 is power of 2: %s\n", f_ispowerof2(3) ? "Yes" : "No");      // No
    printf("6 is power of 2: %s\n", f_ispowerof2(6) ? "Yes" : "No");      // No
    printf("0 is power of 2: %s\n", f_ispowerof2(0) ? "Yes" : "No");      // No
    printf("-4 is power of 2: %s\n", f_ispowerof2(-4) ? "Yes" : "No");    // No
    
    return 0;
}