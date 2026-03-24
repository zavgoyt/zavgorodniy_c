#include <stdio.h>
int main() {
    int n, cnt = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        int x; scanf("%d", &x);
        if(x < 0) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
