#include <stdio.h>

int factorial(int nb) {
    if(nb == 0 || nb == 1) {
        return 1;
    } else {
        return nb * factorial(nb - 1);
    }
}

int main() {
    int number = 5;
    
     printf("Factorial of %d is %d\n", number, factorial(number));
    return 0;
}
