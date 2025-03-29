#include <stdio.h>

int main(){
    int c;
    int arr[10], character=0, spaces=0;
    int largest=0;
    // initializing the array with 0
    for (int num=0 ; num<10 ; num ++)   arr[num]=0;

    printf("enter the number of random values to visit the histogram frequency\n");
    while ((c=getchar()) != EOF){
        if( c >= '0' && c <='9')    arr[c-'0']++;
        else if(c=='\n' || c=='\t' || c == ' ') spaces++;
        else character++;    
    }

    printf("\nFind the largest itteration value\n");
    
    if(character >= spaces)    largest = character;
    else    largest=spaces;
    for (int ittr=0; ittr<10; ittr++)   if(arr[ittr]>largest)  largest=arr[ittr];
    printf("\nthe largest number is:%d\n",largest);
    printf("---Histogram(S-Spaces C-other characters)---\n");
    printf("\n 0  1  2  3  4  5  6  7  8  9  S  C\n");
    printf("\n -  -  -  -  -  -  -  -  -  -  -  -\n");
    for ( int tower=0 ; tower < largest ; tower++ )
        {
            for (int i = 0 ; i< 10 ; i++)
                if (arr[i] > tower) printf(" - ");
                else printf("   ");
        
            if (spaces > tower) printf(" - ");
            else printf("   ");

            if (character > tower) printf(" - ");
            else printf("   ss");

            printf(":%2d \n",tower);
        }
    return 0;
}