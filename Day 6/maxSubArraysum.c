#include<stdio.h>
#include <limits.h>
void maxSubArraySum(int arr[], int n ){
    int maxSum=INT_MIN;
    for(int start=0;start<n;start++){
        for( int end=start;end<n;end++){
            int currSum=0;
            for(int i=start;i<=end;i++){
                    currSum=currSum+arr[i];

            }
            if(maxSum<currSum){
                maxSum = currSum;
            }

        } 
    }
    printf("Maximum Subarray Sum : %d", maxSum);

}


int main (){
    int arr[]={2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    maxSubArraySum(arr, n);
}