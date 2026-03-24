/* 
 * Task 10: Обмен первого и последнего элементов массива
 * 
 * Description: Обмен первого и последнего элементов массива
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
    int temp = arr[0];
    arr[0] = arr[n-1];
    arr[n-1] = temp;
    printf("Результат: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
