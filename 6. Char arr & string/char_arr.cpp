#include<iostream>
#include<cstring>
using namespace std;


int main(){
    char arr[5] = {'a','c','v','t','\0'}; // \0 terminates the char arr
    cout<<arr<<endl;

    char sentence[50];
    cin.getline(sentence, 50); // first argument is arr name, second argument is size of that array and the third argument is the limiter from where the arr with not take input for eg : - "." so it will stop where it will find .

    cout<<"Your sentence : "<<sentence<<endl;
    cout<<"length : "<< strlen(sentence)<<endl;
    return 0;
}