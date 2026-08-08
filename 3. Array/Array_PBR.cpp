// PBR :- Pass by Reference
#include<iostream>
using namespace std;

void printAR(int num[], int n){
    for(int i = 0;i<n; i++){
        cout<<num[i]<<" ";
    }
}

int main(){
    int arr[] = {3,2,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    printAR(arr,n);
    return 0;
}