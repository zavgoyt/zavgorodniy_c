#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    bool is_prime = true;
    
    printf("Enter N: ");
    scanf("%d", &N);
    
    if (N <= 1) {
        is_prime = false;
    } else {
        for (int i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                is_prime = false;
                break;
            }
        }
    }
    
    if (is_prime) {
        printf("%d is a prime number\n", N);
    } else {
        printf("%d is not a prime number\n", N);
    }
    
    return 0;
}
