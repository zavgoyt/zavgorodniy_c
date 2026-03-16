#include <stdio.h>

int main() {
    int N, num, count = 0;
    
    printf("Enter how many numbers: ");
    scanf("%d", &N);
    
    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (num % 7 == 0) {
            count++;
        }
    }
    
    printf("Numbers divisible by 7: %d\n", count);
    
    return 0;
}
