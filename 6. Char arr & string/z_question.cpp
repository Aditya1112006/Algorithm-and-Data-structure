// Question 1: Count how many times lowercase vowels occurred in a String entered by the user.

#include<iostream>
#include<string>
using namespace std;

void vowelCount(string s){
    int count = 0;
    for(int i = 0; i<s.length(); i++){
        if(s[i] == 'a' ||
            s[i] == 'i'||
            s[i] == 'e'||
            s[i] == 'o'||
            s[i] == 'u'){
                count++;
            }
    }
    cout<<"Total number of vowels in string is : "<<count<<endl;
}

int main(){
    string s = "hello everyone";

    vowelCount(s);
    return 0;
}