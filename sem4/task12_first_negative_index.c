/* 
 * Task 12: Поиск индекса первого отрицательного числа
 * 
 * Description: Поиск индекса первого отрицательного числа
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, index = -1;
    printf("Введите количество элементов: ");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    printf("Введите %d целых чисел: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(index == -1 && arr[i] < 0) index = i;
    }
    printf("Индекс первого отрицательного: %d\n", index);
    free(arr);
    return 0;
}
