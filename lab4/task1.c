#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "w");
    
    if (file == NULL) {
        printf("Ошибка: не удалось открыть файл!\n");
        return 1;
    }
    
    printf("Файл успешно открыт для записи\n");
    
    if (fclose(file) == 0) {
        printf("Файл успешно закрыт\n");
    } else {
        printf("Ошибка при закрытии файла\n");
    }
    
    return 0;
}
