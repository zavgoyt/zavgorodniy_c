#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

enum DataType { INT_TYPE, FLOAT_TYPE, STRING_TYPE };

struct Container {
    enum DataType type;
    union Data data;
};

int main() {
    union Data data1;
    struct Container container;
    
    data1.i = 42;
    printf("Как целое: %d\n", data1.i);
    
    data1.f = 3.14;
    printf("Как float: %.2f\n", data1.f);
    
    sprintf(data1.str, "Привет");
    printf("Как строка: %s\n\n", data1.str);
    
    printf("После присвоения строки, целое значение: %d (мусор)\n\n", data1.i);
    
    container.type = INT_TYPE;
    container.data.i = 100;
    printf("Контейнер с целым: ");
    if(container.type == INT_TYPE) printf("%d\n", container.data.i);
    
    container.type = FLOAT_TYPE;
    container.data.f = 99.99;
    printf("Контейнер с float: ");
    if(container.type == FLOAT_TYPE) printf("%.2f\n", container.data.f);
    
    container.type = STRING_TYPE;
    sprintf(container.data.str, "Пример");
    printf("Контейнер со строкой: ");
    if(container.type == STRING_TYPE) printf("%s\n", container.data.str);
    
    return 0;
}
