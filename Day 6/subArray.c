#include<stdio.h>

void subArray(int arr[], int n){
    for(int start= 0; start<n;start++){
        for(int end =start;end<n;end++){
            for(int i = start; i<=end ;i++){
                printf("%d",arr[i]);
            }
            printf(",");
        }
        printf("\n");
    }


}



int main (){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    subArray(arr, n);



    return 0;
}