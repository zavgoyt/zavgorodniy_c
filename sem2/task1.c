#include <stdio.h>

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);
    
    printf("Even numbers from 1 to %d: ", N);
    for (int i = 2; i <= N; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}
