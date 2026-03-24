/* 
 * Task 02: Поиск максимального элемента массива
 * 
 * Description: Поиск максимального элемента массива
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, max;
    printf("Введите количество элементов: ");
    scanf("%d", &n);
    int arr[n];
    printf("Введите %d целых чисел: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
    }
    printf("Максимальный элемент: %d\n", max);
    free(arr);
    return 0;
}
