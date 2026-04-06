#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    
    printf("Введите размер массива: ");
    scanf("%d", &n);
    
    int *arr = (int*)malloc(n * sizeof(int));
    
    if (arr == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }
    
    printf("Введите %d элементов:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nВведенный массив:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);

    arr = NULL;
    
    return 0;
}
