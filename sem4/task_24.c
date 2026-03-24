#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[100];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    int is_pal = 1;
    for(int i=0; i<n/2; i++) {
        if(a[i] != a[n-1-i]) { is_pal = 0; break; }
    }
    printf("%s\n", is_pal ? "YES" : "NO");
    return 0;
}
