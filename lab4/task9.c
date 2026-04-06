#include <stdio.h>

int main() {
    FILE *file;
    char buffer[100];
    
    // Создаем файл с данными
    file = fopen("test.txt", "w");
    fprintf(file, "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    fclose(file);
    
    // Открываем для чтения
    file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Ошибка открытия файла!\n");
        return 1;
    }
    
    // Перемещаемся к 10-й позиции
    fseek(file, 10, SEEK_SET);
    
    // Читаем данные с этой позиции
    fgets(buffer, sizeof(buffer), file);
    printf("Данные с позиции 10: %s\n", buffer);
    
    // Перемещаемся от текущей позиции
    fseek(file, 5, SEEK_CUR);
    fgets(buffer, sizeof(buffer), file);
    printf("Данные с позиции +5: %s\n", buffer);
    
    // Перемещаемся от конца
    fseek(file, -10, SEEK_END);
    fgets(buffer, sizeof(buffer), file);
    printf("Данные за 10 символов до конца: %s\n", buffer);
    
    fclose(file);
    
    return 0;
}
