#include<iostream>
using namespace std;

// Using extra space

void printArr(int *arr,int n){
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {3,0,6,2,8,2};
    int n = sizeof(arr)/sizeof(int);

    int reverse[n];
    for(int i = 0;i<n;i++){
        int j = n-i-1;
        reverse[i] = arr[j];
    }
    for(int i =0;i<n;i++){
        arr[i] = reverse[i];
    }
    
    printArr(arr,n);
    return 0;
}

// Without using extra space

int reverseArr(int arr[], int n){
    int start = 0;
    int end = n - 1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {3,2,6,5,4,8};
    int n = sizeof(arr)/sizeof(int);

    reverseArr(arr,n);

    return 0;
}