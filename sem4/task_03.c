#include <stdio.h>
int main() {
    int n, min, idx=0;
    scanf("%d", &n);
    scanf("%d", &min);
    for(int i=1; i<n; i++) {
        int x; scanf("%d", &x);
        if(x < min) { min = x; idx = i; }
    }
    printf("%d %d\n", min, idx);
    return 0;
}
