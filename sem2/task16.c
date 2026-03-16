#include <stdio.h>

int main() {
    int num, count, a = 0;
    
    printf("Enter numbers (enter 0 to stop):\n");
    while (a == 0) {
        scanf("%d", &num);
        if (num == 0) {
            a = 1;
        }
        count++;
    }
    
    printf("Number of entered numbers (excluding 0): %d\n", count);
    
    return 0;
}
