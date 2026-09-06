#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char ch[100];
    char ch2[100] = " ft. RDJ";
    strcpy(ch, "doctor victor von doom"); // copy string into char arr
    cout<<ch<<endl;
    
    strcat(ch, ch2); // concatenate two arr to first one declared
    cout<<ch<<endl;

    cout<<strcmp(ch, ch2)<<endl; // compare both arr and print values accordingly
    return 0;
}