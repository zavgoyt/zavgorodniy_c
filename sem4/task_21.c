#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[1000];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    int maxs = a[0], cur = a[0];
    for(int i = 1; i < n; i++) {
        cur = (a[i] > cur + a[i]) ? a[i] : cur + a[i];
        if(cur > maxs) maxs = cur;
    }
    printf("%d\n", maxs);
    return 0;
}
