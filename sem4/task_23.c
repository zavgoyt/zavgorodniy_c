#include <stdio.h>
int main() {
    int n, maxlen = 0, curlen = 0, prevsign = 0;
    scanf("%d", &n);
    int a[1000];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int i = 0; i < n; i++) {
        if(a[i] == 0) { curlen = 0; continue; }
        int cursign = (a[i] > 0) ? 1 : -1;
        if(curlen == 0 || cursign == -prevsign) {
            curlen++;
            if(curlen > maxlen) maxlen = curlen;
        } else curlen = 1;
        prevsign = cursign;
    }
    printf("%d\n", maxlen);
    return 0;
}
