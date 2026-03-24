#include <stdio.h>
int main() {
    int n, max_idx=0;
    scanf("%d", &n);
    int a[100];
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        if(a[i] > a[max_idx]) max_idx = i;
    }
    for(int i=max_idx+1; i<n; i++) a[i] = 0;
    for(int i=0; i<n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
