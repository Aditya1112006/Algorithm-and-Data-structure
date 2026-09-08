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

// Question 2: You are given two strings s1 and s2 of equal length. A string swap is an operation where you choose two indices in a string (not necessarily different) and swap the characters at these indices.
// COLLEGE
// Return true if it is possible to make both strings equal by performing at most one string swap on exactly one of the strings. Otherwise, return false.
// Example :
// Input: s1 = "bank", s2 = "kanb"
// Output: true
// Explanation: For example, swap the first character with the last character of s2 to make "bank".

#include<iostream>
#include<string>
using namespace std;

bool swapString(string s1, string s2){

    if(s1.length() != s2.length()){
        return false;
    }

    int first = -1;
    int second = -1;

    for(int i = 0; i < s1.length(); i++){

        if(s1[i] != s2[i]){

            if(first == -1){
                first = i;
            }
            else if(second == -1){
                second = i;
            }
            else{
                return false;
            }
        }
    }

    if(first == -1){
        return true;
    }

    if(second == -1){
        return false;
    }

    swap(s2[first], s2[second]);

    return s1 == s2;
}

int main(){

    string s1 = "bank";
    string s2 = "kanb";

    cout << swapString(s1, s2);

    return 0;
}

