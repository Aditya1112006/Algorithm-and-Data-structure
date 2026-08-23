#include<iostream>
using namespace std;

void printArr(int arr[][4],int n,int m){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[3][4] = {{100,97,45,76},
                    {53,87,99,45},
                    {22,76,89,100}};
    
    int n = 3;
    int m = 4;

    printArr(arr,n,m);
    return 0;
}