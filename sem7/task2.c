#include <stdio.h>

char* reserv(char str[]){
    char *p=str;
    int len=0;

    while(*p){
        len += 1;
        *p++;
    }

    for(int i=0; i<len/2; i++){
        char temp = str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }

    int start=0;

    for(int i=0; i<len/2;i++){
        if(str[i]==' ' || str[i]== '\0'){
            int end = i-1;
            for(int j=start;j<end;j++){
                char temp = str[j];
                str[j]=str[end-(j-start)];
                str[end-(j-start)]= temp;
            }
        }
        start = i+1;
    }

    return str;
}

int main(void){
    char str[] = "Hello world";
    int d = 11;
    
   

    printf("%s", reserv(str));
    printf("\n");
    return 0;
}