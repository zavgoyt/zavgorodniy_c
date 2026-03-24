/* 
 * Task 11: Подсчёт количества вхождений заданного числа
 * 
 * Description: Подсчёт количества вхождений заданного числа
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x, count = 0;
    printf("Введите количество элементов: ");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    printf("Введите %d целых чисел: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Введите число для поиска: ");
    scanf("%d", &x);
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) count++;
    }
    printf("Количество вхождений: %d\n", count);
    free(arr);
    return 0;
}
