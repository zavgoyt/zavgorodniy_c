#include <stdio.h>

enum Day {
    MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
};

struct Event {
    char name[50];
    enum Day day;
};

int main() {
    enum Day today = WEDNESDAY;
    struct Event event;
    int day_num;
    
    printf("Сегодня: ");
    switch(today) {
        case MONDAY: printf("Понедельник\n"); break;
        case TUESDAY: printf("Вторник\n"); break;
        case WEDNESDAY: printf("Среда\n"); break;
        case THURSDAY: printf("Четверг\n"); break;
        case FRIDAY: printf("Пятница\n"); break;
        case SATURDAY: printf("Суббота\n"); break;
        case SUNDAY: printf("Воскресенье\n"); break;
    }
    
    printf("\nВведите название события: ");
    scanf("%s", event.name);
    printf("Введите день (0-6, 0-Понедельник): ");
    scanf("%d", &day_num);
    event.day = (enum Day)day_num;
    
    printf("Событие: %s ", event.name);
    switch(event.day) {
        case MONDAY: printf("в Понедельник\n"); break;
        case TUESDAY: printf("во Вторник\n"); break;
        case WEDNESDAY: printf("в Среду\n"); break;
        case THURSDAY: printf("в Четверг\n"); break;
        case FRIDAY: printf("в Пятницу\n"); break;
        case SATURDAY: printf("в Субботу\n"); break;
        case SUNDAY: printf("в Воскресенье\n"); break;
    }
    
    return 0;
}
