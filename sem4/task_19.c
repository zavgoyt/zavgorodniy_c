#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[100], b[100];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    for(int i=0; i<n; i++) scanf("%d", &b[i]);
    for(int i=0; i<n; i++) {
        printf("%d %d ", a[i], b[i]);
    }
    printf("\n");
    return 0;
}
