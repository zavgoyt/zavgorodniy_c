#include <stdio.h>

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);
    
    printf("Numbers divisible by 3 from 1 to %d: ", N);
    for (int i = 3; i <= N; i += 3) {
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}
