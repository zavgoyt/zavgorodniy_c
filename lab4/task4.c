#include <stdio.h>

int main() {
    FILE *file;
    int a = 10, b = 20;
    float c = 3.14;
    char str[] = "Hello World";
    
    int read_a, read_b;
    float read_c;
    char read_str[50];
    
    // Запись данных
    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Ошибка открытия файла для записи!\n");
        return 1;
    }
    
    fprintf(file, "%d %d %.2f %s\n", a, b, c, str);
    fclose(file);
    
    // Чтение данных
    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Ошибка открытия файла для чтения!\n");
        return 1;
    }
    
    fscanf(file, "%d %d %f %s", &read_a, &read_b, &read_c, read_str);
    fclose(file);
    
    printf("Считанные данные:\n");
    printf("a = %d, b = %d, c = %.2f, str = %s\n", read_a, read_b, read_c, read_str);
    
    return 0;
}
