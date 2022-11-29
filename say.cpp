//
//  say.cpp
//  CPP-Exercises
//
//  Given a number from 0 to 999,999,999,999, spell out that number in English.
//

#include <iostream>
using namespace std;

string getString(long int number){
    string result = "";
    
    if(number == 1){
        result = "one";
    }
    
    return result;
}

int main(){
    long int number = 0;
    string result = "";
    cout << "Enter a number between 0 to 999,999,999,999: ";
    cin >> number;
    
    
    if(number < 0 || number > 999999999999){
        cout << "Number not in range" << endl;
    } else {
        result = getString(number);
        cout << result << endl;
    }
    
    
    return 0;
}
