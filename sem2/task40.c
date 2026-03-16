#include <stdio.h>
#include <stdbool.h>



int main() {


    int N;
    printf("Enter N: ");
    scanf("%d", &N);

    printf("Prime numbers from 1 to %d:\n", N);
    for (int i = 2; i <= N; i++) {
        if(i%2==0 || i%3==0){
            if(i==3){
                printf("2 3 ");
            }
        }
        else{
            if(i<25){
                printf("%d ", i);
            }
            for(int j = 5;j * j <= i; j+=6){
                if(i%j==0 || i%(j+2)==0){
                    N=N;
                }
                else{
                    printf("%d ", i);
                }
            }
            
        }
    }
    printf("\n");
    
    return 0;
}
