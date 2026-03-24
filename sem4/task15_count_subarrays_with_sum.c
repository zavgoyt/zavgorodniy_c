/* 
 * Task 15: Количество подотрезков с данной суммой
 * 
 * Description: Количество подотрезков с данной суммой
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, S, count = 0;
    printf("Введите количество элементов: ");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    printf("Введите %d целых чисел: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Введите целевую сумму S: ");
    scanf("%d", &S);
    
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];
            if(sum == S) count++;
        }
    }
    
    printf("Количество подотрезков с суммой %d: %d\n", S, count);
    free(arr);
    return 0;
}
