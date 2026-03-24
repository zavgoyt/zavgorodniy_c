#include <stdio.h>

int main() {
    int arr[] = {10,20,30,40,50,60};
    int *p = arr + 3;
    printf("%d\n", *p);
    return 0;
}
