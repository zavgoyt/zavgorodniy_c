#include <stdio.h>
int main() {
    int n, has_even=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        int x; scanf("%d", &x);
        if(x % 2 == 0) has_even = 1;
    }
    printf("%s\n", has_even ? "YES" : "NO");
    return 0;
}
