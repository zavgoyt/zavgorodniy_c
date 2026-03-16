#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("Enter N: ");
    scanf("%d", &N);
    
    for (int i = 5; i <= N; i += 5) {
        sum += i;
    }
    
    printf("Sum of numbers divisible by 5 from 1 to %d: %d\n", N, sum);
    
    return 0;
}
