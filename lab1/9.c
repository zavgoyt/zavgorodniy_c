#include <stdio.h>

int main() {
    int x;
    
    printf("Введите x: ");
    scanf("%d", &x);
    
    int expr1 = x*x + 2*x + 1;
    int expr2 = (x + 1)*(x + 1) - (x - 1)*(x - 1);
    
    printf("x^2 + 2x + 1 = %d\n", expr1);
    printf("(x + 1)^2 - (x - 1)^2 = %d\n", expr2);
    
    return 0;
}
