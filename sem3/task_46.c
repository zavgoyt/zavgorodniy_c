#include <stdio.h>

int main() {
    int x;
    int y;

    scanf("%d", &x);

    for(int i = 1; i<=x; i++){
        y = i;
        while(y>0){

            if(y==5 || y%10==5){
                y = i%10;
                y = -1;
            }
            else{
                y=y;
                y /= 10;
            }
        }
        if(y==-1){
            i=i;
        }
        else{
            printf("%d ", i);
        }
        
    }
    printf("\n");
}
