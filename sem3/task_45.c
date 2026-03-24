#include <stdio.h>

int main() {
    int x;
    int y;
    int c;
    scanf("%d", &x);

    while(x>0){
        if((x%10)%2==0){
            y += 1;
            c += 1;
            x /= 10;
        }
        else{
            c +=1;
            x /= 10;
        }
    }

    if(y==c){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

}
