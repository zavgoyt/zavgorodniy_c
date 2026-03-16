#include <stdio.h>

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);
    
    printf("Squares of even numbers from 1 to %d:\n", N);
    for (int i = 2; i <= N; i += 2) {
        printf("%d^2 = %d\n", i, i * i);
    }
    
    return 0;
}
