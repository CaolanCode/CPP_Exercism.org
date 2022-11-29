//
//  say.cpp
//  CPP-Exercises
//
//  Given a number from 0 to 999,999,999,999, spell out that number in English.
//

#include <iostream>
using namespace std;

string digit(long int number){
    
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

string teens(int number){
    
    switch (number) {
        case 10:
            return "ten";
            break;
        case 11:
            return "eleven";
            break;
        case 12:
            return "twelve";
            break;
        case 13:
            return "thirteen";
            break;
        case 14:
            return "fourteen";
            break;
        case 15:
            return "fifteen";
            break;
        case 16:
            return "sixteen";
            break;
        case 17:
            return "seventeen";
            break;
        case 18:
            return "eighteen";
            break;
        case 19:
            return "nineteen";
            break;
        default:
            return "Error";
            break;
    }
    return "Error";
}




string decimal(int number){
    
    switch (number) {
        case 20:
            return "twenty-";
            break;
        case 30:
            return "thirty-";
            break;
        case 40:
            return "forty-";
            break;
        case 50:
            return "fifty-";
            break;
        case 60:
            return "sixty-";
            break;
        case 70:
            return "seventy-";
            break;
        case 80:
            return "eighty-";
            break;
        case 90:
            return "ninty-";
            break;
            
        default:
            return "Error";
            break;
    }
    
    return "Error";
}

int main(){
    long int number = 0;
    string digitString = "";
    int digitInt = 0;
    string decimalString = "";
    int decimalInt = 0;
    string hundredString = "";
    int hundredInt = 0;
    string result = "";
    
    cout << "Enter a number between 0 to 999,999,999,999: ";
    cin >> number;
    
    if(number < 0 || number > 999999999999){
        cout << "Number not in range" << endl;
        return -1;
    }
    
    if(number < 10){
        digitString = digit(number);
        cout << digitString << endl;
        return 0;
    }
    decimalInt = number % 100;
    if(decimalInt < 20){
        decimalString = teens(decimalInt);
        result = decimalString + result;
    } else {
        digitInt = decimalInt % 10;
        digitString = digit(digitInt);
        result = digitString + result;
        decimalInt = decimalInt - digitInt;
        decimalString = decimal(decimalInt);
        result = decimalString + result;
    }
    
        
    
    
    cout << result << endl;
    
    
    
    return 0;
}
