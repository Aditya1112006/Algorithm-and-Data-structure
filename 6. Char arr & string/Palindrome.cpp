#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char *word, int n){
    int strt = 0;
    int end = n -1;
    while(strt < end){
        if(word[strt++] != word[end--]){
            cout<<"It is not valid palindrome.";
            return false;
        }
    }
    cout<<"It is valid palindrome.";
    return true;
}

int main(){
    char word[] = "racecar";

    isPalindrome(word, strlen(word));
    return 0;
}