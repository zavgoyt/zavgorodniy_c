#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    
    // Запись символов
    file = fopen("test.txt", "w");
    if (file == NULL) {
        printf("Ошибка открытия файла для записи!\n");
        return 1;
    }
    
    printf("Запись символов в файл...\n");
    putc('H', file);
    putc('e', file);
    putc('l', file);
    putc('l', file);
    putc('o', file);
    putc('\n', file);
    
    fclose(file);
    
    // Чтение символов
    file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Ошибка открытия файла для чтения!\n");
        return 1;
    }
    
    printf("Содержимое файла: ");
    while ((ch = getc(file)) != EOF) {
        putchar(ch);
    }
    
    fclose(file);
    printf("\n");
    
    return 0;
}
