#include <stdio.h>

int main()
{
    int N1;
    int N2;

    scanf("%d", &N1);
    scanf("%d", &N2);

    


    for(int i = 0; i<N2; i++){
        for(int j=0;j<N1;j++){
            if((i+j)%2 == 0){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }


    return 0;
}