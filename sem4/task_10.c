#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[100];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    int temp = a[0];
    a[0] = a[n-1];
    a[n-1] = temp;
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
