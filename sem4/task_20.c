#include <stdio.h>
int main() {
    int n, dup = 0;
    scanf("%d", &n);
    int a[100];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int i = 0; i < n; i++)
        for(int j = i+1; j < n; j++)
            if(a[i] == a[j]) dup = 1;
    printf("%s\n", dup ? "YES" : "NO");
    return 0;
}
