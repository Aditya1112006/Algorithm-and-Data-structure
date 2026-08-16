#include<iostream>
using namespace std;

int sortarray(int* arr, int n,int target){
    int left = 0;
    int right = n-1;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[left]<=arr[mid]){
            if(arr[left]<=target && target < arr[mid]){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        else{
            if(arr[mid] < target && target < arr[right]){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[] = {5,6,8,0,1,3,4};
    int n = sizeof(arr)/sizeof(int);
    // int target = 1;

    cout<<"Element is at index "<<sortarray(arr,n,1);
    return 0;
}

// leetcode question :- 33