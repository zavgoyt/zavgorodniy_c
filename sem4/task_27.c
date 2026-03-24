#include <stdio.h>
int main() {
    int n, s, cnt=0;
    scanf("%d %d", &n, &s);
    int a[1000];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    for(int i=0; i<n; i++) {
        int sum = 0;
        for(int j=i; j<n; j++) {
            sum += a[j];
            if(sum == s) cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
