#include <stdio.h>

int main() {
    int x;
    int pro = 1;

    scanf("%d", &x);


    while(x>0){
        if(x%10==0 || x==0){
            x = x/10;
        }
        else{
            pro=pro*(x%10);
            x = x/10;
        }
    }
    printf("%d\n", pro);
}
