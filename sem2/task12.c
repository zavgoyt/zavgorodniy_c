#include <stdio.h>

int main() {
    int N, num, sum = 0;
    
    printf("Enter how many numbers: ");
    scanf("%d", &N);
    
    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (num < 0) {
            sum += num;
        }
    }
    
    printf("Sum of negative numbers: %d\n", sum);
    
    return 0;
}
