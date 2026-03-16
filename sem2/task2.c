#include <stdio.h>

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);
    
    printf("Odd numbers from 1 to %d: ", N);
    for (int i = 1; i <= N; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}
