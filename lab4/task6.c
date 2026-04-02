#include <stdio.h>

int main() {
    FILE *file;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int read_arr[10];
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Запись массива в бинарный файл
    file = fopen("data.bin", "wb");
    if (file == NULL) {
        printf("Ошибка открытия файла для записи!\n");
        return 1;
    }
    
    fwrite(arr, sizeof(int), size, file);
    fclose(file);
    
    // Чтение массива из бинарного файла
    file = fopen("data.bin", "rb");
    if (file == NULL) {
        printf("Ошибка открытия файла для чтения!\n");
        return 1;
    }
    
    fread(read_arr, sizeof(int), size, file);
    fclose(file);
    
    // Вывод данных
    printf("Считанный массив:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", read_arr[i]);
    }
    printf("\n");
    
    return 0;
}
