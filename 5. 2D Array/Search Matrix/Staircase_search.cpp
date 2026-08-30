#include<iostream>
using namespace std;

bool staircaseSearch(int mat[][4], int n,int m,int key){
    int row = 0;
    int col = m - 1;
    while (row < n && col >= 0){
        int cell = mat[row][col];
        
        if(cell == key){
            cout<<"Element found"<<"("<<row<<", "<<col<<")"<<endl;
            return true;
        }
        
        else if(cell > key){
            col--;
        }
        
        else{
            row++;
        }
    }
    cout<<"Element not found"<<endl;
    return false;
}

int main(){
    int matrix[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    staircaseSearch(matrix,4,4,33);
    return 0;
}