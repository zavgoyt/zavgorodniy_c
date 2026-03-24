/* 
 * Task 08: Проверка наличия хотя бы одного чётного числа
 * 
 * Description: Проверка наличия хотя бы одного чётного числа
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, found = 0;
    printf("Введите количество элементов: ");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    printf("Введите %d целых чисел: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) found = 1;
    }
    printf("%s\n", found ? "YES" : "NO");
    free(arr);
    return 0;
}
