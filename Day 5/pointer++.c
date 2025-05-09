#include<stdio.h>
int main (){

    int arr[] = {1,2,3,4,5};
    int *ptr = arr;

    printf("Before: %p -> %d", ptr, *ptr);
    ptr++;//Move the next integer
    printf("\nAfter: %p -> %d", ptr, *ptr);






    return 0;
}