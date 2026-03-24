#include <stdio.h>

int main() {
    char src[] = "Hello Pointers";
    char dest[50];
    char *p1 = src;
    char *p2 = dest;
    while(*p1) {
        *p2++ = *p1++;
    }
    *p2 = '\0';
    printf("%s\n", dest);
    return 0;
}
