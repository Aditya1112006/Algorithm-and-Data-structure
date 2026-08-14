#include<iostream>
#include<climits>
using namespace std;

int MaxsubarraySum(int *arr, int n){
    int maxSum = INT_MIN;
    for(int i = 0;i<n;i++){
        int currSum = 0;
        for(int j = i;j<n;j++){
            currSum += arr[j];
            maxSum = max(maxSum, currSum);
            cout<<arr[j]<<" ";
        }
        cout<<" = "<<currSum<<endl;
    }
    cout<<"Maximum subarray sum : "<<maxSum;
}

int main(){
    int arr[8] = {2,8,12,-4,-7,2,3,-1};
    int n = 8;

    MaxsubarraySum(arr, n);
    return 0;
}

// Time Complexity here will be O(n^2) which is better than one in brute force approach.