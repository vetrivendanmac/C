#include <stdio.h>

#define wordStart 1;
#define workdStop 0;
// The results are not printed
int main()
{
    int c, count=0, maxwordSize;
  
    printf("largest word count program");
    while((c=getchar()) != EOF){
        count++;
        if(c=='\n'|| c== '\t'|| c== ' ')
            if(count>maxwordSize) maxwordSize=count;
            count=0;
    }
    printf("number of word counter");
    while((c=getchar()) != EOF)
        if(c=='\n'|| c== '\t'|| c== ' ')
            count++;
        
    printf("print one woed at time");
    while((c=getchar()) != EOF)
        if(c=='\n'|| c== '\t'|| c== ' ')
            printf("\n");
        else printf("%d",c);
        
    return 0;
}