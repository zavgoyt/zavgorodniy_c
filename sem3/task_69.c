#include <stdio.h>

int main() {
    int x;
    int sum;
    int pro = 1;
    int y;
    int v;

    scanf("%d", &x);

    for(int j=1;j<=x;j++){
        y = j;
        while(y>0){
            for(int i = 1; i<=y%10; i++){
                pro*=i;
            }
            sum += pro;
            y/=10;
            pro=1;
        }
        
        if(sum==j || j==2){
            printf("%d ", j);
        }
        else{
            sum=0;
        }
    }
    printf("\n");

}
