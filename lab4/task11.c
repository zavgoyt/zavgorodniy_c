#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    
    // Создаем тестовый файл
    file = fopen("test.txt", "w");
    fprintf(file, "Hello World");
    fclose(file);
    
    // Открываем для чтения
    file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Ошибка открытия файла!\n");
        return 1;
    }
    
    printf("Чтение файла:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    
    // Проверка достижения конца файла
    if (feof(file)) {
        printf("\n\nДостигнут конец файла\n");
    }
    
    // Проверка наличия ошибок
    if (ferror(file)) {
        printf("Произошла ошибка при чтении файла\n");
    } else {
        printf("Ошибок при чтении не обнаружено\n");
    }
    
    fclose(file);
    
    return 0;
}
