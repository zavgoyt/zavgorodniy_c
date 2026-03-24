/* 
 * Task 05: Количество отрицательных элементов
 * 
 * Description: Количество отрицательных элементов
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, count = 0;
    printf("Введите количество элементов: ");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    printf("Введите %d целых чисел: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] < 0) count++;
    }
    printf("Количество отрицательных элементов: %d\n", count);
    free(arr);
    return 0;
}
