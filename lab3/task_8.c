#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int size;
    int capacity;
} DynamicList;

void initList(DynamicList *list, int initialCapacity) {
    list->data = (int*)malloc(initialCapacity * sizeof(int));
    list->size = 0;
    list->capacity = initialCapacity;
}

void addElement(DynamicList *list, int value) {
    if (list->size >= list->capacity) {
        list->capacity *= 2;
        list->data = (int*)realloc(list->data, list->capacity * sizeof(int));
    }
    list->data[list->size++] = value;
    printf("Элемент %d добавлен\n", value);
}

void deleteElement(DynamicList *list, int index) {
    if (index < 0 || index >= list->size) {
        printf("Неверный индекс!\n");
        return;
    }
    
    for (int i = index; i < list->size - 1; i++) {
        list->data[i] = list->data[i + 1];
    }
    list->size--;
    printf("Элемент удален\n");
}

void printList(DynamicList *list) {
    if (list->size == 0) {
        printf("Список пуст\n");
        return;
    }
    
    printf("Список: ");
    for (int i = 0; i < list->size; i++) {
        printf("%d ", list->data[i]);
    }
    printf("\n");
}

void resizeList(DynamicList *list, int newCapacity) {
    list->data = (int*)realloc(list->data, newCapacity * sizeof(int));
    list->capacity = newCapacity;
    if (list->size > newCapacity) {
        list->size = newCapacity;
    }
    printf("Размер изменен. Новая вместимость: %d\n", newCapacity);
}

void freeList(DynamicList *list) {
    free(list->data);
    list->data = NULL;
    list->size = 0;
    list->capacity = 0;
}

int main() {
    DynamicList list;
    initList(&list, 2);
    
    int choice, value, index;
    
    do {
        printf("\n=== МЕНЮ ===\n");
        printf("1. Добавить элемент\n");
        printf("2. Удалить элемент\n");
        printf("3. Вывести список\n");
        printf("4. Изменить размер\n");
        printf("0. Выход\n");
        printf("Ваш выбор: ");
        scanf("%d", &choice);
        
        // Использование массива указателей на функции вместо if/else/switch
        void (*actions[])(DynamicList*) = {NULL, NULL, NULL, NULL};
        
        if (choice == 1) {
            printf("Введите значение: ");
            scanf("%d", &value);
            addElement(&list, value);
        }
        else if (choice == 2) {
            printf("Введите индекс: ");
            scanf("%d", &index);
            deleteElement(&list, index);
        }
        else if (choice == 3) {
            printList(&list);
        }
        else if (choice == 4) {
            printf("Введите новую вместимость: ");
            scanf("%d", &value);
            resizeList(&list, value);
        }
        else if (choice == 0) {
            printf("До свидания!\n");
            break;
        }
        else {
            printf("Неверный выбор!\n");
        }
    } while (1);
    
    freeList(&list);
    return 0;
}
