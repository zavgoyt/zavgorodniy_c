#include <stdio.h>
#include <stdbool.h>

bool contains_digit_3(int num) {
    while (num > 0) {
        if (num % 10 == 3) {
            return true;
        }
        num /= 10;
    }
    return false;
}

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);
    
    printf("Numbers from 1 to %d without digit 3:\n", N);
    for (int i = 1; i <= N; i++) {
        if (!contains_digit_3(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
