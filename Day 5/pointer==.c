#include<stdio.h>
int main(){

    int a=10, b= 20;
    int *ptr1=&a;
    int *ptr2=&a;
    int *ptr3=&b;
    if(ptr1==ptr2){
        printf("ptr 1 and ptr2 point same memory address\n");

    }
    if(ptr1 != ptr3){
        printf("ptr 1 and ptr3 don't point same memory address\n");
    }



    return 0;

}