#include <stdio.h>

int main() {
    char *str = "I love programming in C language";
    char *p = str;
    char *max_start = str;
    int max_len = 0;
    int cur_len = 0;
    char *word_start = str;
    while(*p) {
        if(*p == ' ' || *p == '\0') {
            cur_len = p - word_start;
            if(cur_len > max_len) {
                max_len = cur_len;
                max_start = word_start;
            }
            word_start = p + 1;
        }
        p++;
    }
    for(int i = 0; i < max_len; i++) printf("%c", max_start[i]);
    printf("\n");
    return 0;
}
