#include <stdio.h>

int sqrt_x(int nb) {
    if (nb < 0) {
        return 0;
    }
    if (nb == 0 || nb == 1) {
        return nb;
    }
    
    int start = 1, end = nb, result = 0;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (mid <= nb / mid) {
            result = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    
    return result;
}




int main() {
    int number = 25;
    printf("Square root of %d (rounded down) is %d\n", number, sqrt_x(number));
    return 0;
}