//
//  twoFer.cpp
//  CPP-Exercises
//
//  Insert name in sentence
//

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string name;
    cout << "Enter name: ";
    getline(cin, name);
    
    if(name.size() == 0){
        cout << "One for you, and two for me" << endl;
    } else {
        cout << "One for " << name << ", and two for me" << endl;
    }
}
