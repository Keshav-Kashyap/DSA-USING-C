#include<stdio.h>

void swap(int *a , int *b){
*a=*a+*b-(*b=*a);

}
void arrayout(int arr[] , int n){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    }
void reversArray(int arr[], int n){
    int last = n-1;
    int start=0;
    while(start < last)
    {
        swap(&arr[start],&arr[last]);
        
        start++;
        last--;
    }
    arrayout(arr,n);
}

int main (){

        int arr[]={1,2,3,4,5,6,7,8,9,10};
        int n = sizeof(arr)/sizeof(int);
        reversArray(arr,n);



    return 0;
}