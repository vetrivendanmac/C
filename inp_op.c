#include <stdio.h>

int main(){
    int character;
    printf("enter the line \n");
    
    while((character=getchar())!=EOF){
        printf("\ncharacter %d\nput char is here ",character);
        putchar(character);
    }
}