#include <stdio.h>

#define MAXLEN 100   

int getLine(int[]);
void copy(int[], int[], int);

int main(){
    int lenLargestLine;
    int largest[MAXLEN], temp[MAXLEN], len;
    while ((len=getLine(temp))>1)
        printf("\nStart typing ......\n");
        if (lenLargestLine<len){
            copy(temp, largest, len);
            lenLargestLine=len;
        }
    
    printf("The length of the line :%d",lenLargestLine);
    return 0;
}

int getLine(int arrRef[]){
    int c, i;
    
    printf("\nEnter the list of characters when \\n is encountered the loop stops\n");
    
    for(i=0 ; i < MAXLEN && (c=getchar()) != EOF && c != '\n'; i++)
        arrRef[i] = c;
    
        if ( c == '\n' )    arrRef[++i] = '\0';
    
    return ++i;
}

void copy(int srcRef[], int destRef[], int lenSrc){
    for (int i=0 ; i<lenSrc ; i++)  destRef[i] = srcRef[i];
}

// Not completly tested