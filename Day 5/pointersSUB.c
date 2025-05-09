#include<stdio.h>
int main (){
    
    int arr[]={10,20,30,40,50};
    int *ptr1=&arr[4];
    int *ptr2=&arr[1];
    int diff = ptr1-ptr2;
    printf("Differnce b/w pointers: %d", diff);

    
    return 0;

}