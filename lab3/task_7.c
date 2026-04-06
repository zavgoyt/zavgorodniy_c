#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Student;

int main() {
    int n;
    
    printf("Введите количество студентов: ");
    scanf("%d", &n);
    
    Student *students = (Student*)malloc(n * sizeof(Student));
    
    if (students == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        printf("Студент %d:\n", i+1);
        printf("  Имя: ");
        scanf("%s", students[i].name);
        printf("  Возраст: ");
        scanf("%d", &students[i].age);
    }
    
    printf("\nСписок студентов:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s, возраст %d\n", i+1, students[i].name, students[i].age);
    }
    
    int maxAgeIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].age > students[maxAgeIndex].age) {
            maxAgeIndex = i;
        }
    }
    
    printf("\nСамый старший студент: %s (возраст %d)\n", 
           students[maxAgeIndex].name, students[maxAgeIndex].age);
    
    free(students);
    return 0;
}
