//
//  reverse.cpp
//  CPP-Exercises
//
//  reverse a string
//
#include <iostream>
using namespace std;

void reverse(string& word, long size){
    char temp;
    long rPos = size-1;
    
    for(int i = 0; i < size/2; i++){
        temp = word[i];
        word[i] = word[rPos];
        word[rPos] = temp;
        rPos--;
    }
}


int main(){
    string word;
    
    cout << "Enter a word: ";
    cin >> word;
    reverse(word, word.length());
    cout << word << endl;
    
    return 0;
        
}

