#include<iostream>
using namespace std;

int LinearSearch(int *arr, int n,int key){
    for(int i = 0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]= {2,3,4,5,5,2,8};
    int n = sizeof(arr)/sizeof(int);

    cout<<LinearSearch(arr,n,8)<<endl;
    return 0;
}