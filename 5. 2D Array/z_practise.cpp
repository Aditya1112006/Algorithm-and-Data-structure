// Question 1: Print the number of all 7's that are in the 2d array.
// Example :
// Input - int arr[][] = { {4,7,8}, {8,8,7} }; n = 2 m = 3
// Output - 2

#include<iostream>
using namespace std;

int numberCount(int mat[][3], int n,int m, int value){
    int count = 0;
    for(int i = 0; i < n;i++){
        for(int j = 0;j < m;j++){
            if(value == mat[i][j]){
                count++;
            }
        }
    }
    cout<<"Total number of "<<value<<" in matrix is "<<count<<endl;
}

int main(){
    int matrix[3][3] = { 
                    {4,7,8}, 
                    {8,8,7},
                    {3,5,1} };

    numberCount(matrix, 3, 3, 8);
    return 0;
}


// Question 2: Print out the sum of the numbers in the second row of the "nums" array.
// Example :
// Input - int nums[][] = {{1,4,9}, { 11,4,3}, {2,2,3} };
// Output - 18

#include<iostream>
using namespace std;

int sumRow(int mat[][3],int n, int m){
    int sum = 0;
    for(int j = 0;j<m;j++){
        sum += mat[n][j];
    }
    cout<<"Sum = "<<sum;
}

int main(){
    int matrix[3][3] = {{1,4,9}, 
                        {11,8,23}, 
                        {2,2,3} };

    sumRow(matrix,1,3);
    return 0;
}


// Question 3: Write a program to Find Transpose of a Matrix.

#include<iostream>
using namespace std;

int printMatrix(int tranpose[][4],int n,int m){
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cout<<tranpose[i][j]<<" ";
        }
        cout<<endl;
    }
}
int transposeMatrix(int mat[][4],int n, int m){
    int tranpose[4][4] = {};
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            tranpose[j][i] = mat[i][j];
        }
    }
    printMatrix(tranpose,4,4);
}

int main(){
    int matrix[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    transposeMatrix(matrix,4,4);
    return 0;
}