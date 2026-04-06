#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float average_score;
};

int main() {
    struct Student student1 = {"Ivan Petrov", 20, 85.5};
    
    printf("Информация о студенте:\n");
    printf("Имя: %s\n", student1.name);
    printf("Возраст: %d\n", student1.age);
    printf("Средний балл: %.2f\n\n", student1.average_score);
    
    struct Student student2;
    printf("Введите имя студента: ");
    scanf("%s", student2.name);
    
    printf("Введите возраст: ");
    scanf("%d", &student2.age);
    
    printf("Введите средний балл: ");
    scanf("%f", &student2.average_score);
    
    printf("\nВведенный студент:\n");
    printf("Имя: %s\n", student2.name);
    printf("Возраст: %d\n", student2.age);
    printf("Средний балл: %.2f\n", student2.average_score);
    
    return 0;
}
