#include <stdio.h>
int main() {
    int n, max_len=1, cur=1;
    scanf("%d", &n);
    int a[1000];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    for(int i=1; i<n; i++) {
        if(a[i] > a[i-1]) cur++;
        else cur = 1;
        if(cur > max_len) max_len = cur;
    }
    printf("%d\n", max_len);
    return 0;
}
