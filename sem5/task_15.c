#include <stdio.h>

int main() {
    int src[] = {10,20,30,40,50};
    int dest[5];
    int *p1 = src;
    int *p2 = dest;
    for(int i = 0; i < 5; i++) {
        *p2++ = *p1++;
    }
    for(int i = 0; i < 5; i++) printf("%d ", dest[i]);
    printf("\n");
    return 0;
}
