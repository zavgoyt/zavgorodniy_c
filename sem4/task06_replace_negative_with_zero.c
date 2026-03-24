/* 
 * Task 06: Замена отрицательных элементов на ноль
 * 
 * Description: Замена отрицательных элементов на ноль
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
        if(arr[i] < 0) arr[i] = 0;
    }
    printf("Результат: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
