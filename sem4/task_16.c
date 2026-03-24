#include <stdio.h>
int main() {
    int n, sum = 0, cnt = 0;
    scanf("%d", &n);
    int a[100];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    double avg = (double)sum / n;
    for(int i = 0; i < n; i++) if(a[i] > avg) cnt++;
    printf("%d\n", cnt);
    return 0;
}
