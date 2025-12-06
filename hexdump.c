#include <stdio.h>
#include <stdlib.h>

void print_clear(char *s, int len){
    printf("|");
    for(int i=0; i<len; i++){
        if(s[i] < 0x20 || s[i] > 0x7E){
            //replace special char with .
            printf(".");
        }else{
            //print actual char
            printf("%c", s[i]); 
        }
    }
    printf("|"); 
}

int main(){
    int c;
    int mi = 0;
    char *buffer = (char *)calloc(0x10, sizeof(char));
    while((c=getchar()) != EOF){
        buffer[mi % 0x10] = c;
        if(mi % 16 == 0x0) printf("%08x ", mi); 
        printf("%02x ", c);
        mi++;

        if(mi % 16 == 0x0){
            //last memory add in row
            print_clear(buffer, 0x10);
            printf("\n");
        }
    }
    int last_mi = mi%16;
    printf("%*s", 0x10*3-last_mi*3, " ");
    print_clear(buffer, last_mi);
    printf("\n%08x", mi);
    printf("\n");
} 