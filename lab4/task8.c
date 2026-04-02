#include <stdio.h>

typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    FILE *file;
    Person people[] = {
        {"Alice", 20},
        {"Bob", 25},
        {"Charlie", 30},
        {"Diana", 22}
    };
    int count = sizeof(people) / sizeof(people[0]);
    Person read_people[10];
    
    // Запись массива структур в файл
    file = fopen("people.bin", "wb");
    if (file == NULL) {
        printf("Ошибка открытия файла для записи!\n");
        return 1;
    }
    
    fwrite(people, sizeof(Person), count, file);
    fclose(file);
    
    // Чтение массива структур из файла
    file = fopen("people.bin", "rb");
    if (file == NULL) {
        printf("Ошибка открытия файла для чтения!\n");
        return 1;
    }
    
    fread(read_people, sizeof(Person), count, file);
    fclose(file);
    
    // Вывод данных
    printf("Считанные структуры:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. Имя: %s, Возраст: %d\n", i+1, read_people[i].name, read_people[i].age);
    }
    
    return 0;
}
