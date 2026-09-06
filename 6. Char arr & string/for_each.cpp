#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "doctor victor von doom";
    for(char ch : str){
        cout<< ch <<"";
    }
    return 0;
}