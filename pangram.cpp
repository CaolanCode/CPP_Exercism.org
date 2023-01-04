//
//  pangram.cpp
//  CPP-Exercises
//
//  Check if sentence is a pangram
//

#include <iostream>
using namespace std;

bool checkPangram(string& sentence){
    
    int check[26] = {0};
    int position;
    
    for(int i = 0; i < sentence.length(); i++){
        if(sentence[i] >= 65 && sentence[i] <= 90){
            position = sentence[i] - 65;
        } else if(sentence[i] >= 97 && sentence[i] <= 122){
            position = sentence[i] - 97;
        }
        check[position] = 1;
    }
    
    for(int i = 0; i < 26; i++){
        if(check[i] == 0){
            return false;
        }
    }
    
    
    return true;
}

int main(){
    string sentence = "The quick brown fox jumps over the lazy dog";
    
    if(checkPangram(sentence)){
        cout << "The sentence is a pangram" << endl;
    } else {
        cout << "The sentence is not a pangram" << endl;
    }
    
    return 0;
    
}
