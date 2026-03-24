#include <stdio.h>

int main() {
    char *str = "Hello World";
    char *p = str;
    while(*p) p++;
    printf("%ld\n", p - str);
    return 0;
}
