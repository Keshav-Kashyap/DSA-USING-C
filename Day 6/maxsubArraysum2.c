#include<stdio.h>
#include <limits.h>
void maxSubArraySum(int arr[], int n ){
    int maxSum=INT_MIN;
    for(int start=0;start<n;start++){
        int currSum=0;
        for( int end=start;end<n;end++){
            currSum+=arr[end];

            if(maxSum<currSum){
              maxSum = currSum;  
            }

        } 
    }
    printf("Maximum Subarray Sum : %d", maxSum);

}


int main (){
    int arr[]={1,-2,3,4};
    int n = sizeof(arr)/sizeof(int);
    maxSubArraySum(arr, n);
}