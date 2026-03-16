#include <stdio.h>

int main() {
    int N, num, count = 0;
    
    printf("Enter how many numbers: ");
    scanf("%d", &N);
    
    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (num > 0) {
            count++;
        }
    }
    
    printf("Number of positive numbers: %d\n", count);
    
    return 0;
}
