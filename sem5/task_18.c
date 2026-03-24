#include <stdio.h>

int main() {
    int arr[] = {10,25,30,5,40,15};
    int *p = arr;
    int count = 0;
    for(int i = 0; i < 6; i++) {
        if(*p++ > 20) count++;
    }
    printf("%d\n", count);
    return 0;
}
