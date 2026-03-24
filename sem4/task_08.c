#include <stdio.h>
int main() {
    int n, has = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        int x; scanf("%d", &x);
        if(x % 2 == 0) has = 1;
    }
    printf("%s\n", has ? "YES" : "NO");
    return 0;
}
