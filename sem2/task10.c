#include <stdio.h>

int main() {
    int N;
    long long product = 1;
    int found = 0;
    
    printf("Enter N: ");
    scanf("%d", &N);
    
    for (int i = 3; i <= N; i += 3) {
        product *= i;
        found = 1;
    }
    
    if (found) {
        printf("Product of numbers divisible by 3 from 1 to %d: %lld\n", N, product);
    } else {
        printf("No numbers divisible by 3 found in range 1..%d\n", N);
    }
    
    return 0;
}
