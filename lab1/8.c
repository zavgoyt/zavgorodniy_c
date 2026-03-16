#include <stdio.h>
#include <limits.h>

int main() {
    int x = INT_MAX; // 2147483647
    
    printf("x = %d\n", x);
    printf("x + 1 = %d\n", x + 1);
    printf("\nОбъяснение: Произошло переполнение. ");
    printf("Так как int может хранить значения от %d до %d, ", INT_MIN, INT_MAX);
    printf("при добавлении 1 произошло переполнение и значение стало минимальным.\n");
    
    return 0;
}
