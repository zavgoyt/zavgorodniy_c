#include <stdio.h>

int main() {
    char *str = "Hello Pointers";
    char *p = str;
    while(*p) {
        printf("%c", *p++);
    }
    printf("\n");
    return 0;
}
