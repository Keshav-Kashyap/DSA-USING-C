#include<stdio.h>
int main (){

    int arr[5]={10,20,30,40,50};
    int *ptr=arr;
    ptr=ptr+3;
    printf("Pointer after +3 : %p -> %d", ptr, *ptr);




    return 0;
}