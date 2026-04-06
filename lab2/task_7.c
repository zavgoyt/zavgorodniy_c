#include <stdio.h>

enum Course {
    FRESHMAN, SOPHOMORE, JUNIOR, SENIOR
};

struct Student {
    char name[50];
    int age;
    enum Course course;
    float average_score;
};

#define MAX_STUDENTS 100

void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

int partition(struct Student students[], int low, int high) {
    int pivot_index = low + (high - low) / 2;
    float pivot_score = students[pivot_index].average_score;
    
    swap(&students[pivot_index], &students[high]);
    
    int i = low - 1;
    
    for(int j = low; j < high; j++) {
        if(students[j].average_score > pivot_score) {
            i++;
            swap(&students[i], &students[j]);
        }
    }
    
    swap(&students[i + 1], &students[high]);
    return i + 1;
}

void quicksort(struct Student students[], int low, int high) {
    if(low < high) {
        int pi = partition(students, low, high);
        quicksort(students, low, pi - 1);
        quicksort(students, pi + 1, high);
    }
}

void sort_by_score(struct Student students[], int count) {
    if(count <= 1) return;
    quicksort(students, 0, count - 1);
}

const char* get_course_name(enum Course course) {
    switch(course) {
        case FRESHMAN: return "1-й курс";
        case SOPHOMORE: return "2-й курс";
        case JUNIOR: return "3-й курс";
        case SENIOR: return "4-й курс";
        default: return "Неизвестно";
    }
}

void add_student(struct Student students[], int *count) {
    if(*count >= MAX_STUDENTS) {
        printf("Достигнуто максимальное количество студентов!\n");
        return;
    }
    
    struct Student *new_student = &students[*count];
    int course_choice;
    
    printf("\nВведите имя студента: ");
    scanf("%s", new_student->name);
    
    printf("Введите возраст: ");
    scanf("%d", &new_student->age);
    
    printf("Выберите курс:\n");
    printf("0 - 1-й курс\n");
    printf("1 - 2-й курс\n");
    printf("2 - 3-й курс\n");
    printf("3 - 4-й курс\n");
    printf("Введите номер: ");
    scanf("%d", &course_choice);
    new_student->course = (enum Course)course_choice;
    
    printf("Введите средний балл: ");
    scanf("%f", &new_student->average_score);
    
    (*count)++;
    printf("Студент успешно добавлен!\n");
}

void display_students(struct Student students[], int count) {
    int i;
    
    if(count == 0) {
        printf("\nСписок студентов пуст.\n");
        return;
    }
    
    printf("\n=== Список студентов ===\n");
    for(i = 0; i < count; i++) {
        printf("\nСтудент %d:\n", i+1);
        printf("Имя: %s\n", students[i].name);
        printf("Возраст: %d\n", students[i].age);
        printf("Курс: %s\n", get_course_name(students[i].course));
        printf("Средний балл: %.2f\n", students[i].average_score);
    }
}

void search_by_name(struct Student students[], int count, char name[]) {
    int i, found = 0;
    
    for(i = 0; i < count; i++) {
        int j = 0;
        int equal = 1;
        while(students[i].name[j] != '\0' && name[j] != '\0') {
            if(students[i].name[j] != name[j]) {
                equal = 0;
                break;
            }
            j++;
        }
        if(students[i].name[j] != name[j]) {
            equal = 0;
        }
        
        if(equal) {
            printf("\nСтудент найден:\n");
            printf("Имя: %s\n", students[i].name);
            printf("Возраст: %d\n", students[i].age);
            printf("Курс: %s\n", get_course_name(students[i].course));
            printf("Средний балл: %.2f\n", students[i].average_score);
            found = 1;
        }
    }
    
    if(!found) {
        printf("Студент '%s' не найден.\n", name);
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int student_count = 0;
    int choice;
    char search_name[50];
    
    do {
        printf("\nСистема управления студентами\n");
        printf("1 Добавить студента\n");
        printf("2 Показать всех студентов\n");
        printf("3 Поиск по имени\n");
        printf("4 Сортировка по среднему баллу\n");
        printf("5 Выход\n");
        printf("Выберите опцию: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                add_student(students, &student_count);
                break;
            case 2:
                display_students(students, student_count);
                break;
            case 3:
                printf("Введите имя для поиска: ");
                scanf("%s", search_name);
                search_by_name(students, student_count, search_name);
                break;
            case 4:
                sort_by_score(students, student_count);
                printf("Студенты отсортированы по среднему баллу!\n");
                display_students(students, student_count);
                break;
            case 5:
                printf("Выход из программы...\n");
                break;
            default:
                printf("Неверная опция!\n");
        }
    } while(choice != 5);
    
    return 0;
}