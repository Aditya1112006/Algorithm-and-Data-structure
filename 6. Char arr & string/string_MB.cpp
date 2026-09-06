// String member function

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Tony Stark Ft. RDJ";
    cout<< str.length()<<endl; // Length
    cout<< str.at(5)<<endl; // Indexing
    cout<<str.substr(3,3)<<endl; // substring of string
    cout<< str.find("ny ")<<endl; // Find word
    cout<< str.find("t", 10)<<endl; // Find word number 10 will start finding from 10th index.
    return 0;
}