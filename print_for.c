#include <stdio.h>
// Ways of printing data inside a printf statement
/*
    %4d - representing the integer with minimum 4 numers
    %f  - representing the fload with minimum 4 numers
    %.3f- trim the post deciumal value to 3 or restrict the value
    %2.3f - gives minimum of 2 numbers with maximum of 3 floating numbers

    #define PI 3.14     There is no memory been allocated for symbolic representation
*/
int main(){
    float fhar;
    int cel=0, step=20;
    for ( ; cel < 301 ; cel=cel+step){
        fhar = (9*cel)/5 +(32);
        printf("%.3f\n",fhar);
    }
    printf("Hello world");

}