#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Person;

void addPerson() {
    FILE *file;
    Person person;
    
    printf("Введите имя: ");
    fgets(person.name, sizeof(person.name), stdin);
    // Удаляем символ новой строки
    size_t len = strlen(person.name);
    if (len > 0 && person.name[len-1] == '\n') {
        person.name[len-1] = '\0';
    }
    
    printf("Введите возраст: ");
    scanf("%d", &person.age);
    getchar(); // Очищаем буфер
    
    file = fopen("database.bin", "ab");
    if (file == NULL) {
        printf("Ошибка открытия файла!\n");
        return;
    }
    
    fwrite(&person, sizeof(Person), 1, file);
    fclose(file);
    
    printf("Запись добавлена!\n");
}

void readAll() {
    FILE *file;
    Person person;
    int count = 0;
    
    file = fopen("database.bin", "rb");
    if (file == NULL) {
        printf("Ошибка открытия файла или файл не существует!\n");
        return;
    }
    
    printf("\nСписок всех записей:\n");
    while (fread(&person, sizeof(Person), 1, file) == 1) {
        printf("%d. Имя: %s, Возраст: %d\n", ++count, person.name, person.age);
    }
    
    if (count == 0) {
        printf("База данных пуста\n");
    }
    
    fclose(file);
}

int main() {
    int choice;
    
    do {
        printf("\n=== Файловая база данных ===\n");
        printf("1. Добавить запись\n");
        printf("2. Показать все записи\n");
        printf("0. Выход\n");
        printf("Выбор: ");
        scanf("%d", &choice);
        getchar(); // Очищаем буфер
        
        switch(choice) {
            case 1:
                addPerson();
                break;
            case 2:
                readAll();
                break;
            case 0:
                printf("До свидания!\n");
                break;
            default:
                printf("Неверный выбор!\n");
        }
    } while (choice != 0);
    
    return 0;
}
