#include<stdio.h>


int main (){

    int arr[]={10,20,30};
    int *ptr=&arr[2];
    printf("Before decrement: %p -> %d", ptr, *ptr);
    ptr--;
    printf("\nAfter Decrement: %p - > %d", ptr, *ptr);



    return 0;

}
