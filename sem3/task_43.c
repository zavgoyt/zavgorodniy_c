#include <stdio.h>

int main() {
    int x;
    int max;

    scanf("%d", &x);

    while(x>0){
        if(x%10>max){
            max = x%10;
            x /= 10;
        }
        else{
            x /= 10;
        }
    }
    printf("%d\n", max);
}
