#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, index, value;
    
    printf("Введите размер массива: ");
    scanf("%d", &n);
    
    int *arr = (int*)malloc(n * sizeof(int));
    
    if (arr == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }
    
    printf("Введите %d элементов:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Введите позицию для вставки (0-%d): ", n);
    scanf("%d", &index);
    printf("Введите значение: ");
    scanf("%d", &value);
    
    if (index < 0 || index > n) {
        printf("Неверный индекс!\n");
        free(arr);
        return 1;
    }
    
    n++;
    arr = (int*)realloc(arr, n * sizeof(int));
    
    for (int i = n - 1; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[index] = value;
    
    printf("Массив после вставки:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    return 0;
}
