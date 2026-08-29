#include<iostream>
using namespace std;

int searchMatrix(int mat[][4], int n, int m){
    int key = 33;
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=m;j++){
            if(mat[i][j] == key){
                cout<<"Element found = "<< mat[i][j]<<endl;
            }
        }
    }
    return -1;
}

int main(){
    int matrix[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    searchMatrix(matrix, 4,4);
    return 0;
}