#include <stdio.h>

int main() {
    int arr[] = {1,1,2,2,3,4,4,5};
    int n = 8;
    int *slow = arr;
    int *fast = arr + 1;
    while(fast < arr + n) {
        if(*fast != *slow) {
            slow++;
            *slow = *fast;
        }
        fast++;
    }
    int new_size = (slow - arr) + 1;
    for(int i = 0; i < new_size; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
