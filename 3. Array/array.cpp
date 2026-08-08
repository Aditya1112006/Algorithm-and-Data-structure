#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the length of array : ";
    cin>>n;
    int arr[n];
    // n = sizeof(arr) / sizeof(int);

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    return 0;
}