#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5};
    int *left = arr;
    int *right = arr + 4;
    while(left < right) {
        int temp = *left;
        *left++ = *right;
        *right-- = temp;
    }
    for(int i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
