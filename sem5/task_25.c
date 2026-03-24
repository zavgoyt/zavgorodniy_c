#include <stdio.h>

int main() {
    int a[] = {1,3,5,7};
    int b[] = {2,4,6,8};
    int result[8];
    int *p1 = a, *p2 = b, *p3 = result;
    int na = 4, nb = 4;
    while(na > 0 && nb > 0) {
        if(*p1 <= *p2) {
            *p3++ = *p1++;
            na--;
        } else {
            *p3++ = *p2++;
            nb--;
        }
    }
    while(na > 0) { *p3++ = *p1++; na--; }
    while(nb > 0) { *p3++ = *p2++; nb--; }
    for(int i = 0; i < 8; i++) printf("%d ", result[i]);
    printf("\n");
    return 0;
}
