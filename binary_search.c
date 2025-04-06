#include <stdio.h>

int main(){
    // Requires only sorted elements
    int len, first = 0, mid, last;
    
    printf("\nget the number of elements\n");
    scanf("%d",&len);
    printf("len: %d",len);
    
    int arr[len];
    
    for (int i = 0 ;i<len ; i++) {
        printf("\nenter the value for index %d",i);
        scanf("%d",&arr[i]);
    }
    
    last = len-1;
    
    // The len variable is reused as search element since the scope of len is no longer needed
    int searchElem;
    printf("\nenter the search element\n");
    scanf("%d",&searchElem);
    
    while(first<=last){
        mid = first + (last - first)/2;
        printf("\nfirst:%d mid:%d Last:%d\n",first,mid,last);
        if (arr [mid] == searchElem) {
            printf("\nfound%d\n",mid);        
            // return 0;
            break;
        }
        else if (arr[mid] > searchElem) last = mid - 1;
        else first = mid +1;
        printf("\nAt end of loop\n");
        printf("\nfirst:%d mid:%d Last:%d\n",first,mid,last);
    }
    
    printf("\nnot found\n%d",mid);
    return 0;
}