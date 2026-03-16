#include <stdio.h>

int main() {
    printf("Multiplication table (results <= 50):\n\n");
    
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            int result = i * j;
            if (result > 50) {
                continue;
            }
            printf("%d x %d = %d\n", i, j, result);
        }
        printf("\n");
    }
    
    return 0;
}
