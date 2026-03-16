#include <stdio.h>
#include <limits.h>

int main() {
    int N, num, min_even = INT_MAX;
    int found = 0;
    
    printf("Enter how many numbers: ");
    scanf("%d", &N);
    
    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (num % 2 == 0 && num < min_even) {
            min_even = num;
            found = 1;
        }
    }
    
    if (found) {
        printf("Minimum even number: %d\n", min_even);
    } else {
        printf("No even numbers found\n");
    }
    
    return 0;
}
