#include <stdio.h>
#include <limits.h>

int main() {
    int N, num, max = INT_MIN;
    
    printf("Enter how many numbers: ");
    scanf("%d", &N);
    
    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }
    
    printf("Maximum number: %d\n", max);
    
    return 0;
}
