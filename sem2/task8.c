#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("Enter N: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i += 2) {
        sum += i;
    }
    
    printf("Sum of odd numbers from 1 to %d: %d\n", N, sum);
    
    return 0;
}
