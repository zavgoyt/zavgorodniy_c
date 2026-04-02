#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    FILE *file;
    Person person = {"John Doe", 25};
    Person read_person;
    
    // Запись структуры в файл
    file = fopen("person.bin", "wb");
    if (file == NULL) {
        printf("Ошибка открытия файла для записи!\n");
        return 1;
    }
    
    fwrite(&person, sizeof(Person), 1, file);
    fclose(file);
    
    // Чтение структуры из файла
    file = fopen("person.bin", "rb");
    if (file == NULL) {
        printf("Ошибка открытия файла для чтения!\n");
        return 1;
    }
    
    fread(&read_person, sizeof(Person), 1, file);
    fclose(file);
    
    // Вывод данных
    printf("Считанная структура:\n");
    printf("Имя: %s\n", read_person.name);
    printf("Возраст: %d\n", read_person.age);
    
    return 0;
}
