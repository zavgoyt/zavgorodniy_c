#include <stdio.h>

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);
    
    printf("Squares greater than 50 from 1 to %d:\n", N);
    for (int i = 1; i <= N; i++) {
        int square = i * i;
        if (square > 50) {
            printf("%d^2 = %d\n", i, square);
        }
    }
    
    return 0;
}
