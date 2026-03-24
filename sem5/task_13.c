#include <stdio.h>

int main() {
    int arr[] = {3,1,8,4,12,5};
    int *p = arr;
    int max = *p;
    for(int i = 0; i < 6; i++) {
        if(*p > max) max = *p;
        p++;
    }
    printf("%d\n", max);
    return 0;
}
