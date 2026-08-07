#include<iostream>
using namespace std;

// void changeA(int *ptr){ // pass by reference using pointers
//     *ptr = 20;
//     cout<<*ptr<<endl;
// }

// int main(){
//     int a = 10;
//     changeA(&a);
//     cout<<a<<endl;
//     return 0;
// }

void changeA(int &a){  // pass be reference using reference variable
    a = 20;
    cout<<a<<endl;
}

int main(){
    int a = 10;
    changeA(a);
    cout<<a<<endl;
    return 0;
}