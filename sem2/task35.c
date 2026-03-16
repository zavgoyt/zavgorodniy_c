#include <stdio.h>

int main() {
    printf("Multiplication table (results <= 30):\n\n");
    
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            int result = i * j;
            if (result > 30) {
                continue;
            }
            printf("%2d x %2d = %2d\n", i, j, result);
        }
        printf("\n");
    }
    
    return 0;
}
