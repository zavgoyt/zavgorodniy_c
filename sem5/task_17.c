#include <stdio.h>

int main() {
    int arr[] = {5,3,-2,8,-1,7};
    int *p = arr;
    while(*p >= 0) p++;
    printf("%d\n", *p);
    return 0;
}
