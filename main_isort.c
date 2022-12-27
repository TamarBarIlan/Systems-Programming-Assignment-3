#include <stdio.h>
#include "isort.h"


int main()
{
    int arr[10] = {7,5,9,1,2,2,2,6,8,4};
    for(int i = 0; i<10; i++){
        printf("%d ,", arr[i]);
    } 
    printf("\n");
    insertion_sort(arr, 10);
    for(int i = 0; i<10; i++){
        printf("%d ,", arr[i]);
    } 
    printf("\n");
    return 0;
}