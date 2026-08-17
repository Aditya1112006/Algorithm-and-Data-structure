#include<iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

void insertionSort(int *arr, int n){
    for(int i = 1 ;i<n;i++){
        int temp = arr[i];
        int pre = i-1;
        while(pre >= 0 && arr[pre] > temp){
            arr[pre+1] = arr[pre];
            pre--;
        }
        arr[pre + 1] = temp;
    }
    printArr(arr,n);
}

int main(){
    int arr[] = {4,1,9,2,6,8};
    int n = sizeof(arr)/sizeof(int);

    insertionSort(arr,n);
    return 0;
}