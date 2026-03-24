/* 
 * Task 16: Длина наибольшей подпоследовательности, которая чередуется по знаку
 * 
 * Description: Длина наибольшей подпоследовательности, которая чередуется по знаку
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
    
    int max_len = 1;
    int current_len = 1;
    int last_sign = (arr[0] > 0) ? 1 : ((arr[0] < 0) ? -1 : 0);
    
    for(int i = 1; i < n; i++) {
        int current_sign = (arr[i] > 0) ? 1 : ((arr[i] < 0) ? -1 : 0);
        
        if(current_sign != 0 && last_sign != 0 && current_sign != last_sign) {
            current_len++;
            last_sign = current_sign;
        } else if(current_sign != 0 && last_sign == 0) {
            current_len++;
            last_sign = current_sign;
        } else if(current_sign == 0) {
            continue;
        } else {
            if(current_len > max_len) max_len = current_len;
            if(current_sign != 0) {
                current_len = 1;
                last_sign = current_sign;
            } else {
                current_len = 1;
                last_sign = 0;
            }
        }
    }
    
    if(current_len > max_len) max_len = current_len;
    printf("Максимальная длина чередующейся подпоследовательности: %d\n", max_len);
    free(arr);
    return 0;
}
