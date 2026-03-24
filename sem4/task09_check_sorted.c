/* 
 * Task 09: Проверка, упорядочен ли массив по возрастанию
 * 
 * Description: Проверка, упорядочен ли массив по возрастанию
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sorted = 1;
    printf("Введите количество элементов: ");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    printf("Введите %d целых чисел: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1]) {
            sorted = 0;
            break;
        }
    }
    printf("%s\n", sorted ? "YES" : "NO");
    free(arr);
    return 0;
}
