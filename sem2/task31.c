#include <stdio.h>

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);
    
    printf("%d x %d square of stars:\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
