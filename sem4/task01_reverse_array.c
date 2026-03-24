/* 
 * Task 01: Вывод массива в обратном порядке
 * 
 * Description: Вывод массива в обратном порядке
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[10];
    printf("Введите 10 целых чисел: ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Массив в обратном порядке: ");
    for(int i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
