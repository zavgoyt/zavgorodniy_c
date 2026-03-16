#include <stdio.h>

int main() {
    int N;
    long long factorial = 1;
    
    printf("Enter N: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i += 2) {
        factorial *= i;
    }
    
    printf("Product of odd numbers from 1 to %d: %lld\n", N, factorial);
    
    return 0;
}
