#include <stdio.h>

int main() {
    char *s1 = "Hello";
    char *s2 = "Hello";
    char *s3 = "World";
    while(*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    printf("%d\n", *s1 - *s2);
    return 0;
}
