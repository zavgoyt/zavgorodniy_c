/* 
 * Task 13: Циклический сдвиг массива вправо на одну позицию
 * 
 * Description: Циклический сдвиг массива вправо на одну позицию
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
    int last = arr[n-1];
    for(int i = n-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = last;
    printf("Результат сдвига: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
