#include <stdio.h>

int main() {
    int x = 5, y = 10;
    int *p1 = &x, *p2 = &y;
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("%d %d\n", x, y);
    return 0;
}
