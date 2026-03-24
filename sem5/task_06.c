#include <stdio.h>

int main() {
    int a = 777;
    int *p1 = &a;
    int *p2 = p1;
    printf("%d %d\n", *p1, *p2);
    return 0;
}
