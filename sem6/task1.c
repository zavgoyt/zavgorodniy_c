#include <stdio.h>

int main() {
    char str[] = "aaabbbccc";
    char result[100];
    char *src = str;      
    char *res = result;   
    
    
    while (*src) {
        char current = *src; 
        int count = 1;       
        
        while (*(src + 1) != '\0' && *(src+1)==current) {
            count++;
            src++;
        }
        *res = current;
        res++;
        
        
        *res = count + '0';
        res++;
        
        src++;
    }
    
    *res = '\0';
    
    printf("%s\n", result);
    
    return 0;
}