#include <stdio.h>

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);
    
    printf("Numbers from %d down to 1, skipping multiples of 4:\n", N);
    for (int i = N; i >= 1; i--) {
        if (i % 4 == 0) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}
