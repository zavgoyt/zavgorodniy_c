#include <stdio.h>

int main() {
    int x;

    int o;
    int d;
    int t;
    int c;
    int p;
    int s;
    int sc;
    int v;
    int dv;
    int n;

    scanf("%d", &x);

    while(x>0){
        switch(x%10){
            case 1:
                o+=1;
                x/=10;
                break;
            case 2:
                d+=1;
                x/=10;
                break;
            case 3:
                t+=1;
                x/=10;
                break;
            case 4:
                c+=1;
                x/=10;
                break;
            case 5:
                p+=1;
                x/=10;
                break;
            case 6:
                s+=1;
                x/=10;
                break;
            case 7:
                sc+=1;
                x/=10;
                break;
            case 8:
                v+=1;
                x/=10;
                break;
            case 9:
                dv+=1;
                x/=10;
                break;
            default:
                n+=1;
                x/=10;
                break;
        }
    }
    printf("1: %d\n2: %d\n3: %d\n4: %d\n5: %d\n6: %d\n7: %d\n8: %d\n9: %d\n0: %d\n", o, d, t, c, p, s, sc, v, dv, n);

}
