//
//  say.cpp
//  CPP-Exercises
//
//  Given a number from 0 to 999,999,999,999, spell out that number in English.
//

#include <iostream>
using namespace std;

string digit(int number){
    
    switch (number) {
        case 1:
            return "one";
            break;
        case 2:
            return "two";
            break;
        case 3:
            return "three";
            break;
        case 4:
            return "four";
            break;
        case 5:
            return "five";
            break;
        case 6:
            return "six";
            break;
        case 7:
            return "seven";
            break;
        case 8:
            return "eight";
            break;
        case 9:
            return "nine";
            break;
            
        default:
            return "Error";
            break;
    }
    
    return "Error";
}

string getString(long int number){
    string digitString = "";
    int digitInt = 0;
    string result = "";
    
    digitInt = number % 10;
    digitString = digit(digitInt);
    
    result = result + digitString;
    
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
