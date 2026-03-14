#include <stdio.h>

int main() {
    float a = 0.1f;
    float b = 0.2f;
    float sum = a + b;
    
    printf("a + b = %.20f\n", sum);
    printf("Ожидалось: 0.30000000000000000000\n");
    printf("Из-за погрешности представления чисел с плавающей точкой\n");
    
    return 0;
}
