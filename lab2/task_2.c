#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float average_score;
};

int main() {
    struct Student students[5] = {
        {"Анна", 19, 100},
        {"Борис", 20, 78.0},
        {"Вера", 18, 95.0},
        {"Глеб", 21, 88.5},
        {"Дарья", 19, 84.0}
    };
    int max_index = 0;
    
    printf("Список всех студентов:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d. %s, Возраст: %d, Балл: %.2f\n", 
               i+1, students[i].name, students[i].age, students[i].average_score);
    }
    
    for(int i = 0; i < 5; i++) {
        if(students[i].average_score > students[max_index].average_score) {
            max_index = i;
        }
    }
    
    printf("\nСтудент с наибольшим средним баллом:\n");
    printf("%s с баллом %.2f\n", students[max_index].name, students[max_index].average_score);
    
    return 0;
}
