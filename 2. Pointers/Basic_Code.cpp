#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;
    cout<<*ptr<<endl; // Pointer

    int b = 11;
    cout<<&b<<endl;
    cout<<*(&b)<<endl; // Dereferencing pointer

    int* pptr = NULL;
    cout<<pptr<<endl; // Null pointer
    return 0;
}

