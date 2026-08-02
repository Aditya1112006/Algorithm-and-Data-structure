#include <iostream>
using namespace std;

int main() {
    int n = 50;

    while (n > 1) {
        cout << n << " ";
        n /= 2;
    }

    return 0;
}

// Time complexity :- O(logn)