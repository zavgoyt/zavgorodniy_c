#include <stdio.h>
int main() {
    int n, len=1, max_len=1, sign=0;
    scanf("%d", &n);
    int a[1000];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    if(n==0) { printf("0\n"); return 0; }
    for(int i=1; i<n; i++) {
        if(a[i] == 0 || a[i-1] == 0) continue;
        int newsign = (a[i] > 0) ? 1 : -1;
        int prevsign = (a[i-1] > 0) ? 1 : -1;
        if(newsign == -prevsign) {
            len++;
            if(len > max_len) max_len = len;
        } else len = 1;
    }
    printf("%d\n", max_len);
    return 0;
}
