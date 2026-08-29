#include<iostream>
using namespace std;

int sumDiagonal(int mat[][4], int n){
    int sum = 0;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i==j){
                sum += mat[i][j];
            }else if(j == n-i-1){
                sum += mat[i][j];
            }
        }
    }
    cout << "sum = "<<sum;
}

// Time complexity :- O(n^2);

int main(){
    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};

    sumDiagonal(matrix,4);
    return 0;
}



// Efficient way of solving this problem
#include<iostream>
using namespace std;

int sumDiagonal(int mat[][3], int n){
    int sum = 0;

    for(int i = 0;i<n;i++){
        sum += mat[i][i];
        if(i != n-i-1){
            sum += mat[i][n-i-1];
        }
    }
    cout << "sum = "<<sum;
}

// Time complexity :- O(n);

int main(){
    int matrix[3][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};

    sumDiagonal(matrix,3);
    return 0;
}


