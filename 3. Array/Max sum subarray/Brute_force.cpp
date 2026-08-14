// Brute force approach

#include<iostream>
#include<climits>
using namespace std;

int maxSumArr(int *arr, int n){
    int maxSum = INT_MIN;
    for(int i = 0; i<n ;i++){
        for(int j = i; j<n;j++){
            int currSum = 0;
            for(int k = i;k<=j;k++){
                currSum += arr[k];
            }
            cout<<currSum<<" ,";
            maxSum = max(maxSum, currSum);
        }
        cout<<endl;
    }
    cout<<"Maximum subarray sum : "<<maxSum<<endl;
}

int main(){
    int arr[6] = {2, -4, 6, -1, 0, 4};
    int n = 6;

    maxSumArr(arr,n);
    return 0;
} 

// In this case time omplexity will be O(n^3) Which is one of the worse time complexity.