#include <stdio.h>
int main() {
    int n, inv=0;
    scanf("%d", &n);
    int a[1000];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(a[i] > a[j]) inv++;
    printf("%d\n", inv);
    return 0;
}
