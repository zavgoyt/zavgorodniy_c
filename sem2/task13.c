#include <stdio.h>

int main() {
    int N, num;
    
    printf("Enter how many numbers: ");
    scanf("%d", &N);
    
    printf("Enter %d numbers:\n", N);
    printf("Numbers greater than 10: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (num > 10) {
            printf("%d ", num);
        }
    }
    printf("\n");
    
    return 0;
}
