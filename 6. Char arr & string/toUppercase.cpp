#include<iostream>
#include<cstring>
using namespace std;

int toUppercase(char *arr, int n){
    for(int i = 0;i<n;i++){
        char ch = arr[i];
        if(arr[i]>= 'A' && arr[i]<='Z'){
            continue;
        }else{
            arr[i] = ch -('a'-'A');
        }
    }
}

int main(){
    char arr[9] = {"AdityaCh"};

    toUppercase(arr,strlen(arr));
    cout<< arr ;
    return 0;
}