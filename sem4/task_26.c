#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[1000];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    int max_sum = a[0], cur = a[0];
    for(int i=1; i<n; i++) {
        cur = (a[i] > cur + a[i]) ? a[i] : cur + a[i];
        if(cur > max_sum) max_sum = cur;
    }
    printf("%d\n", max_sum);
    return 0;
}
