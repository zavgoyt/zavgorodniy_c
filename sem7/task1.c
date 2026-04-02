#include <stdio.h>


int array_sov(int arr1[], int n1, int arr2[], int n2) {
    int max = (n1 < n2) ? n1 : n2;
    int result[max];
    int result_size = 0;
    
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                int already_exists = 0;
                for (int k = 0; k < result_size; k++) {
                    if (result[k] == arr1[i]) {
                        already_exists = 1;
                        break;
                    }
                }
                if (!already_exists) {
                    result[result_size] = arr1[i];
                    (result_size)++;
                }
                break;
            }
        }
    }

    for(int a=0; a < result_size; a++){
        printf("%d", result[a]);
    }
    printf("\n");

    return 1;
}


int main(void){
    int arr1[]={1,2,3,4,5};
    int arr2[]={3,4,5,6,7};
    int n1=5;
    int n2=5;

    array_sov(arr1, n1, arr2, n2);
}