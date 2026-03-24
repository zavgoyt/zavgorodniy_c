#include <stdio.h>

int main(void) {
    int x;
    int sum;
    scanf("%d", &x);

    while(x>0){
        sum = sum+(x%10);
        x = x/10;
    }
    printf("%d\n", sum);
}
