#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[100];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    int last = a[n-1];
    for(int i = n-1; i >= 1; i--) a[i] = a[i-1];
    a[0] = last;
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
