#include <stdio.h>

struct Rectangle {
    float width;
    float height;
};

float calculate_area(struct Rectangle rect) {
    return rect.width * rect.height;
}

float calculate_perimeter(struct Rectangle *rect) {
    return 2 * ((*rect).width + (*rect).height);
}

int main() {
    struct Rectangle rect;
    
    printf("Введите ширину прямоугольника: ");
    scanf("%f", &rect.width);
    printf("Введите высоту прямоугольника: ");
    scanf("%f", &rect.height);
    
    printf("\nПлощадь: %.2f\n", calculate_area(rect));
    printf("Периметр: %.2f\n", calculate_perimeter(&rect));
    
    return 0;
}
