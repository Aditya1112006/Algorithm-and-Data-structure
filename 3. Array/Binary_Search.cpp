#include<iostream>
using namespace std;

int binarySearch(int *arr, int n,int key){
    int start = 0;
    int end = n-1;

    
    while(start<=end){
        int mid = start + (end-start) / 2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,4,6,9,23,24,33,54,61,87,99};
    int n = sizeof(arr)/sizeof(int);
    int key = 21;

    cout<<"Element "<<key<<" is in the index "<<binarySearch(arr, n, key);
    return 0;
}