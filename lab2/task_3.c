#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    char name[50];
    struct Date birth_date;
};

int main() {
    struct Person persons[3] = {
        {"Александр Пушкин", {6, 6, 1799}},
        {"Мария Иванова", {15, 3, 2002}},
        {"Дмитрий Петров", {22, 11, 2001}}
    };
    int i;
    
    printf("Список всех людей:\n");
    for(i = 0; i < 3; i++) {
        printf("%s: %02d.%02d.%d\n", persons[i].name, 
               persons[i].birth_date.day, persons[i].birth_date.month, 
               persons[i].birth_date.year);
    }
    
    printf("\nЛюди, родившиеся после 2000 года:\n");
    for(i = 0; i < 3; i++) {
        if(persons[i].birth_date.year > 2000) {
            printf("%s: %02d.%02d.%d\n", persons[i].name, 
                   persons[i].birth_date.day, persons[i].birth_date.month, 
                   persons[i].birth_date.year);
        }
    }
    
    return 0;
}
