#include <stdio.h>

int main() {
    FILE *file;
    long size;
    
    // Создаем тестовый файл
    file = fopen("test.txt", "w");
    for (int i = 0; i < 100; i++) {
        fprintf(file, "x");
    }
    fclose(file);
    
    // Открываем файл для определения размера
    file = fopen("test.txt", "rb");
    if (file == NULL) {
        printf("Ошибка открытия файла!\n");
        return 1;
    }
    
    // Перемещаемся в конец файла
    fseek(file, 0, SEEK_END);
    
    // Получаем текущую позицию (размер файла)
    size = ftell(file);
    
    printf("Размер файла: %ld байт\n", size);
    
    fclose(file);
    
    return 0;
}
