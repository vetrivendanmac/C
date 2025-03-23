// character count program implementing the ++ operator
#include <stdio.h>

int main(){
    printf("Hello world");
    int character;
    while ((character=getchar())!='stop'){
    // while ((character=getchar())!='s'){
        // if (character=='\n')
        putchar(character);
    }
}