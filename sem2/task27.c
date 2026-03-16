#include <stdio.h>

int main() {
    int N;
    int found = 0;
    
    printf("Enter N: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        if (i % 17 == 0) {
            printf("First number divisible by 17 in range 1..%d: %d\n", N, i);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("No number divisible by 17 found in range 1..%d\n", N);
    }
    
    return 0;
}
