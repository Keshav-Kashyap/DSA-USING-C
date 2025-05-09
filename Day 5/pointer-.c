#include<stdio.h>
int main(){

    int arr[]={10,20,30,40,50};
    int *ptr=&arr[4];
    ptr=ptr-2;
    printf(" Pointer After -2: %p->%d", ptr, *ptr);
    


    return 0;
}