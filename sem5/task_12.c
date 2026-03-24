#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int *p = arr;
    int sum = 0;
    for(int i = 0; i < 7; i++) {
        sum += *p++;
    }
    printf("%d\n", sum);
    return 0;
}
