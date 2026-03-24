/* 
 * Task 07: Среднее арифметическое элементов массива
 * 
 * Description: Среднее арифметическое элементов массива
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;
    printf("Введите количество элементов: ");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    printf("Введите %d целых чисел: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    double mean = (double)sum / n;
    printf("Среднее арифметическое: %.2f\n", mean);
    free(arr);
    return 0;
}
