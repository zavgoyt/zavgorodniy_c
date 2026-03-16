#include <stdio.h>
#include <limits.h>

int main() {
    int N, num;
    int max_div5 = INT_MIN;
    int found = 0;
    
    printf("Enter how many numbers: ");
    scanf("%d", &N);
    
    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (num % 5 == 0 && num > max_div5) {
            max_div5 = num;
            found = 1;
        }
    }
    
    if (found) {
        printf("Largest number divisible by 5: %d\n", max_div5);
    } else {
        printf("No numbers divisible by 5 found\n");
    }
    
    return 0;
}
