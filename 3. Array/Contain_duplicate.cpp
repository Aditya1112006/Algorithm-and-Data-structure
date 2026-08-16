#include<iostream>
using namespace std;

bool containDuplicate(int *arr, int n){
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]== arr[j]){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[] = {2,5,3,6,3,6,71,3};
    int n = sizeof(arr)/sizeof(int);

    cout <<boolalpha <<containDuplicate(arr,n)<<endl;
    return 0;
}

// leetcode question :- 217