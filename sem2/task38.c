#include <stdio.h>

int main() {
    int N, count = 0;
    printf("Enter N: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if ((i * j) % 7 == 0) {
                count++;
            }
        }
    }
    
    printf("Number of pairs (i,j) with 1≤i,j≤%d where i*j is divisible by 7: %d\n", N, count);
    
    return 0;
}
