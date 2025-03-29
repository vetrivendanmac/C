#include <stdio.h>
// the output requiements are: integers[], spaces, none of the above
// input using getchar in while loop
int main(){
    int c, intArray[10], spaces, otherChars;
    
    printf("int range of 0-9: %d - %d ",'0','9');
    // initialize the values with 0
    for ( int i=0; i<10 ; i++) intArray[i] = 0;

    printf("\nbegin typing to input\n");
    while( (c=getchar()) != EOF){
        if(c==' ' || c=='\n' || c=='\t')    spaces++;
        else if (c >= '0' && c <= '9')   ++intArray[c-'0'];
        else    otherChars++;
    }
    // print all the values measured
    for (int i=0 ; i<10 ; i++) printf("\t%d\t",intArray[i]);
    printf("\n number of spaces: %d and number of otherCharacters: %d \n",spaces,otherChars);
    return 0;
}