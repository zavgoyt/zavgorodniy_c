#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[100];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    int ok = 1;
    for(int i = 0; i < n-1; i++) {
        if(a[i] > a[i+1]) ok = 0;
    }
    printf("%s\n", ok ? "YES" : "NO");
    return 0;
}
