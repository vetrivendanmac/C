#include <stdio.h>
// C = (5/9)(F-32)
int main(){
    int far=0, step=20;
    int cel;
    printf("  F  C\n");
    while (far <301){
        cel = 5*(far-32) /9 ;
        // printf("%d",cel);
        printf(" %d %d\n",far,cel);
        far=far+step;
        // break;
    }
    printf("Hello world");
    return 0;
}