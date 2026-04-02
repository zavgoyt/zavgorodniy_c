#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    
    printf("Введите начальный размер массива: ");
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
    
    printf("Введите новый размер массива: ");
    scanf("%d", &m);

    arr = (int*)realloc(arr, m * sizeof(int));
    
    if (arr == NULL) {
        printf("Ошибка перевыделения памяти!\n");
        return 1;
    }
    
    if (m > n) {
        printf("Введите дополнительные %d элементов:\n", m - n);
        for (int i = n; i < m; i++) {
            printf("arr[%d] = ", i);
            scanf("%d", &arr[i]);
        }
    }
    
    printf("\nОбновленный массив:\n");
    for (int i = 0; i < m; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    int k;
    printf("Введите новый размер (меньше текущего): ");
    scanf("%d", &k);
    
    arr = (int*)realloc(arr, k * sizeof(int));
    
    printf("Массив после уменьшения:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    return 0;
}
