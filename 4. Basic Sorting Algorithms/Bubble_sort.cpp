#include<iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int *arr, int n){
    for(int i = 0;i<n-1;i++){
        bool isSwap = false;
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return;
        }
    }
    printArr(arr,n);
}

int main(){
    int arr[7] = {6,9,3,5,2,7,1};
    // int arr[6] = {2,3,4,5,6,7};
    int n= sizeof(arr)/sizeof(int);

    bubbleSort(arr,n);
    return 0;
}