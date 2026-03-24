/* 
 * Task 17: Количество инверсий в массиве
 * 
 * Description: Количество инверсий в массиве
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, inversions = 0;
    printf("Введите количество элементов: ");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    printf("Введите %d целых чисел: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) inversions++;
        }
    }
    
    printf("Количество инверсий: %d\n", inversions);
    free(arr);
    return 0;
}
