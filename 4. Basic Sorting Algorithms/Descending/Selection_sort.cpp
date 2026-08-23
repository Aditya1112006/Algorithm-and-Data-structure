#include<iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int *arr, int n){
    for(int i =0;i<n;i++){
        int maxidx = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]>arr[maxidx]){
                maxidx = j;
            }
        }
        swap(arr[maxidx],arr[i]);
    }
    printArr(arr,n);
}

int main(){
    int arr[] = {3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr)/sizeof(int);

    selectionSort(arr,n);
    return 0;
}