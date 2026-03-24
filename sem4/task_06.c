#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[100];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] < 0) a[i] = 0;
    }
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
