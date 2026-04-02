#include <stdio.h>

int main() {
    FILE *file;
    char buffer[100];
    
    // Запись строк
    file = fopen("test.txt", "w");
    if (file == NULL) {
        printf("Ошибка открытия файла для записи!\n");
        return 1;
    }
    
    fputs("Первая строка\n", file);
    fputs("Вторая строка\n", file);
    fputs("Третья строка\n", file);
    
    fclose(file);
    
    // Чтение строк
    file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Ошибка открытия файла для чтения!\n");
        return 1;
    }
    
    printf("Содержимое файла:\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(file);
    
    return 0;
}
