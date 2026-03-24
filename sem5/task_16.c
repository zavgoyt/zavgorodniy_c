#include <stdio.h>

int main() {
    int a[] = {1,2,3,4,5};
    int b[] = {1,2,3,4,5};
    int *p1 = a;
    int *p2 = b;
    int equal = 1;
    for(int i = 0; i < 5; i++) {
        if(*p1++ != *p2++) equal = 0;
    }
    printf("%d\n", equal);
    return 0;
}
