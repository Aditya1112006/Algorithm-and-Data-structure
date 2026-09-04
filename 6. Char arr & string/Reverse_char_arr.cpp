#include<iostream>
using namespace std;

int reverseArr(char *arr, int n){
    int strt = 0;
    int end = n-1;
    while(strt < end){
        swap(arr[end], arr[strt]);
        strt++;
        end--;
    }
}

int main(){
    char arr[7] = "bankai";
    int n = 6;

    reverseArr(arr,n);
    cout<<arr;
    return 0;
}