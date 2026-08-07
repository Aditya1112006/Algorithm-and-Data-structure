#include<iostream>
using namespace std;

void ChangeA(int a){
    cout<<a<<endl;
}

int main(){
    int a = 10;
    ChangeA(20);

    cout<<a<<endl;
    return 0;
}