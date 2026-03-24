#include <stdio.h>

int main() {
    int a = 1, b = 2;
    int *p1 = &a, *p2 = &a, *p3 = &b;
    printf("%d\n", p1 == p2);
    printf("%d\n", p1 != p3);
    return 0;
}
