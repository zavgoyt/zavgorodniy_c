#include <stdio.h>

int main() {
    char str[] = "aaaaaaaaaaaaabbbbbbbbbbbbbbccccccccccc";
    
    char *read = str;
    char *write = str;
    
    if (*read != '\0') {
        *write = *read;
        write++;
        read++;
    }
    
    while (*read != '\0') {
        if (*read != *(write - 1)) {
            *write = *read;
            write++;
        }
        read++;
    }
    
    *write = '\0';
    
    printf("%s\n", str);
    
    return 0;
}