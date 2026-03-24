/* 
 * Task 14: Максимальная сумма подотрезка (1D Maximum Subarray)
 * 
 * Description: Максимальная сумма подотрезка (1D Maximum Subarray)
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Введите количество элементов: ");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    printf("Введите %d целых чисел: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max_sum = arr[0];
    int current_sum = arr[0];
    int start = 0, end = 0, temp_start = 0;
    
    for(int i = 1; i < n; i++) {
        if(arr[i] > current_sum + arr[i]) {
            current_sum = arr[i];
            temp_start = i;
        } else {
            current_sum = current_sum + arr[i];
        }
        
        if(current_sum > max_sum) {
            max_sum = current_sum;
            start = temp_start;
            end = i;
        }
    }
    
    printf("Максимальная сумма: %d\n", max_sum);
    printf("Подотрезок [%d, %d]: ", start, end);
    for(int i = start; i <= end; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
