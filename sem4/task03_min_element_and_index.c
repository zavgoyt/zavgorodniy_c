/* 
 * Task 03: Минимальный элемент и его индекс
 * 
 * Description: Минимальный элемент и его индекс
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, min, min_index;
    printf("Введите количество элементов: ");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    printf("Введите %d целых чисел: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    min_index = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
    }
    printf("Минимальный элемент: %d, индекс: %d\n", min, min_index);
    free(arr);
    return 0;
}
