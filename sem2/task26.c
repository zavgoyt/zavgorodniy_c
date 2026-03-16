#include <stdio.h>

int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);
    
    printf("Numbers with digit sum > 10 from 1 to %d:\n", N);
    for (int i = 1; i <= N; i++) {
        if (sum_of_digits(i) > 10) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
