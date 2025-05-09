#include<stdio.h>

int binSearch(int arr[], int n , int key){
int st=0, end = n - 1;
while(st <= end){

    int mid = (st+ end)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        st = mid+1;
 
    } else{
        end = mid-1;

    }

    
}

return -1;

}

int main (){

    int arr[]= {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(int);
    int key=7;
   
printf("Ans index: %d",  binSearch(arr,n,key));
    return 0;
}