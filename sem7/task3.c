#include <stdio.h>

char* finder(char str[]){
    char *p=str;
    int len=0;
    

    while(*p){
        len += 1;
        p++;
    }

    int start=0;

    for(int i=0; i<=len;i++){
        if(str[i]==' ' || str[i]== '\0'){
            char Ustr[10];
            int end = i-1;
            int idx=0;
            for(int j=start; j<=end; j++){
                Ustr[idx++] = str[j];
            }
            Ustr[idx] = '\0';
            printf("%s\n", Ustr);
            start += i;
        }
        
    }

    return str;
}

int main(void){
    char str[] = "Hello world";
   
    finder(str);
    return 0;
}