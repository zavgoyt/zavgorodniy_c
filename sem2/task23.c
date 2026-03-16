#include <stdio.h>

int main() {
    int N, count = 0;
    printf("Enter N: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            count++;
        }
    }
    
    printf("Number of divisors of %d: %d\n", N, count);
    
    return 0;
}
