#include<stdio.h>


void arrayout(int arr[] , int n){
for(int i=0;i<n;i++){
    printf("%d ", arr[i]);
}
}

void reversArray(int arr[], int n){
    int copyarr[n];
    for(int i=0;i<n;i++){
        copyarr[i]= arr[n-1-i];
    }
    arrayout(copyarr,n);
}


int main(){

    int arr[]={5,243,4,5,4,6,8,9};
    int n = sizeof(arr)/sizeof(int);
reversArray(arr,n);

    return 0;

}