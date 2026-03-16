#include <stdio.h>

int main() {
    int N, K;
    int found = 0;
    
    printf("Enter N: ");
    scanf("%d", &N);
    printf("Enter K: ");
    scanf("%d", &K);
    
    printf("Pairs (i,j) with 1≤i,j≤%d and i + j = %d:\n", N, K);
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i + j == K) {
                printf("(%d, %d) ", i, j);
                found = 1;
            }
        }
    }
    
    if (!found) {
        printf("No pairs found");
    }
    printf("\n");
    
    return 0;
}
