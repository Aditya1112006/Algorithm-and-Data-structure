#include<iostream>
#include<climits>
using namespace std;

void printArr(int *arr, int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void countingSort(int *arr, int n){
    int freq[100000] {0};
    int minValue = INT_MAX;
    int maxValue = INT_MIN;
    for(int i = 0;i<n;i++){
        minValue = min(minValue, arr[i]);
        maxValue = max(maxValue, arr[i]);
    }

    for(int i = 0;i<n;i++){
        freq[arr[i]]++;

    }

    for(int i=minValue,j=0;i<=maxValue;i++){
        while(freq[i]>0){
            arr[j++] = i;
            freq[i]--;
        }
    }
    printArr(arr,n);
}

int main(){
    int arr[] = {4,1,1,8,2,6,5};
    int n = sizeof(arr)/sizeof(int);

    countingSort(arr,n);
    return 0;
}