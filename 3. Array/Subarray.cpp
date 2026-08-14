#include<iostream>
using namespace std;

int printSubarray(int *arr, int n){
    for(int i = 0;i<n;i++){
        cout<<"The subarray of "<<arr[i]<<" in this this array is "<<endl;
        for(int j = i;j<n;j++ ){
            // cout<<"( "<<i<<" , "<<j<<" )";
            for(int k = i; k<=j ; k++){
                cout<<arr[k];
            }
            cout<<endl;
        }
        // cout<<endl;
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;

    printSubarray(arr,n);
    return 0;
}