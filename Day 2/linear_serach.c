#include<stdio.h>

int linearSearch(int *arr, int n, int key){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}


int main(){

    int arr[]= {2,4,6,8,10,12,14,16};
    int n = sizeof(arr)/sizeof(int);
    int key = 10;

   int idx =  linearSearch(arr, n , key);
   if(idx == -1){
    printf("Key is not found");

   }else {
    printf("key: %d index %d", key, idx);
   }


    return 0;
}