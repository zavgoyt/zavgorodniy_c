#include <stdio.h>
int main() {
    int n, max;
    scanf("%d", &n);
    scanf("%d", &max);
    for(int i = 1; i < n; i++) {
        int x; scanf("%d", &x);
        if(x > max) max = x;
    }
    printf("%d\n", max);
    return 0;
}
