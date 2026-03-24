#include <stdio.h>

int main() {
    int a = 123;
    int *p = &a;
    int **pp = &p;
    printf("%d\n", **pp);
    return 0;
}
