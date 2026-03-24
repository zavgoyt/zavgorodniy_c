#include <stdio.h>
int main() {
    int n, has_dup=0;
    scanf("%d", &n);
    int a[100];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(a[i] == a[j]) has_dup = 1;
        }
    }
    printf("%s\n", has_dup ? "YES" : "NO");
    return 0;
}
