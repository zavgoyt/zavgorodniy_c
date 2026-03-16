#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("Enter N: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            sum += i;
        }
    }
    
    printf("Sum of divisors of %d: %d\n", N, sum);
    
    return 0;
}
