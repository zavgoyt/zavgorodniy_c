#include <stdio.h>

int main() {
    int N, count = 0;
    printf("Enter N: ");
    scanf("%d", &N);
    
    for (int i = 2; i <= N; i += 2) {
        count++;
    }
    
    printf("Number of even numbers from 1 to %d: %d\n", N, count);
    
    return 0;
}
