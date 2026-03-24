#include <stdio.h>
int main() {
    int n, idx=-1;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        int x; scanf("%d", &x);
        if(x < 0 && idx == -1) idx = i;
    }
    printf("%d\n", idx);
    return 0;
}
