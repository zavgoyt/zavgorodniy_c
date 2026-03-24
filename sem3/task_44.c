#include <stdio.h>

int main() {
    int x;
    int y;

    scanf("%d", &x);

    while(x>0){
        y = y*10 + x%10;
        x /= 10;
    }
    printf("%d\n", y);
}
