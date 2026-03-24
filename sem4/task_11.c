#include <stdio.h>
int main() {
    int n, x, cnt=0;
    scanf("%d", &n);
    int a[100];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    for(int i=0; i<n; i++) if(a[i] == x) cnt++;
    printf("%d\n", cnt);
    return 0;
}
