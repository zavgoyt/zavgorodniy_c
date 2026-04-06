#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char input[200];
    char buffer[200];
    
    printf("Введите строку: ");
    fgets(input, sizeof(input), stdin);
    
    // Удаляем символ новой строки если есть
    size_t len = strlen(input);
    if (len > 0 && input[len-1] == '\n') {
        input[len-1] = '\0';
    }
    
    // Запись в файл
    file = fopen("test.txt", "w");
    if (file == NULL) {
        printf("Ошибка открытия файла для записи!\n");
        return 1;
    }
    
    fprintf(file, "%s", input);
    fclose(file);
    
    // Чтение из файла
    file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Ошибка открытия файла для чтения!\n");
        return 1;
    }
    
    fgets(buffer, sizeof(buffer), file);
    fclose(file);
    
    printf("Содержимое файла: %s\n", buffer);
    
    return 0;
}
