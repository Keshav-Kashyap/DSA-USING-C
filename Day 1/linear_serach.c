#include<stdio.h>
int main (){

    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    int i, key = 3;
    for(i=0;i<size;i++){
        if(key == arr[i]){
            printf("Key: %d & Index: %d", key, i);
        }


    }


    return 0;
}