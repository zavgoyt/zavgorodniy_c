#include <stdio.h>
int main() {
    int n, min_val, min_idx = 0;
    scanf("%d", &n);
    scanf("%d", &min_val);
    for(int i = 1; i < n; i++) {
        int x; scanf("%d", &x);
        if(x < min_val) {
            min_val = x;
            min_idx = i;
        }
    }
    printf("%d %d\n", min_val, min_idx);
    return 0;
}
