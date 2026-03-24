/* 
 * Task 04: Сумма всех элементов массива
 * 
 * Description: Сумма всех элементов массива
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;
    printf("Введите количество элементов: ");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    printf("Введите %d целых чисел: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Сумма элементов: %d\n", sum);
    free(arr);
    return 0;
}
