#include <stdio.h>

int main() {
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = 9;
    int max_sum = arr[0];
    int current = arr[0];
    for(int i = 1; i < n; i++) {
        current = (arr[i] > current + arr[i]) ? arr[i] : current + arr[i];
        if(current > max_sum) max_sum = current;
    }
    printf("%d\n", max_sum);
    return 0;
}
