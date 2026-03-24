#include <stdio.h>

int main() {
    char *str = "C programming is powerful";
    char *p = str;
    while(*p) {
        if(*p != ' ') {
            char *start = p;
            while(*p && *p != ' ') p++;
            while(start < p) printf("%c", *start++);
            printf("\n");
        } else p++;
    }
    return 0;
}
