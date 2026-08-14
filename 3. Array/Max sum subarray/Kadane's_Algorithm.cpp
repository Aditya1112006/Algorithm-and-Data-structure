#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

void kadaneAlgoMaxSum(int *arr, int n) {
    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i = 0; i < n; i++) {
        currSum += arr[i];

        maxSum = max(maxSum, currSum);

        if(currSum < 0) {
            currSum = 0;
        }
    }

    cout << "Maximum subarray sum : " << maxSum;
}

int main() {
    int arr[5] = {3, -2, 8, -2, 1};
    int n = 5;

    kadaneAlgoMaxSum(arr, n);

    return 0;
}

// Here the time complexity will be O(n)