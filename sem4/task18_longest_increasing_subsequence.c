/* 
 * Task 18: Наибольшая возрастающая подпоследовательность (LIS)
 * 
 * Description: Наибольшая возрастающая подпоследовательность (LIS)
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
    
    int *dp = malloc(n * sizeof(int));
    int max_len = 1;
    
    for(int i = 0; i < n; i++) {
        dp[i] = 1;
        for(int j = 0; j < i; j++) {
            if(arr[j] < arr[i] && dp[j] + 1 > dp[i]) {
                dp[i] = dp[j] + 1;
            }
        }
        if(dp[i] > max_len) max_len = dp[i];
    }
    
    printf("Длина наибольшей возрастающей подпоследовательности: %d\n", max_len);
    free(arr);
    free(dp);
    return 0;
}
