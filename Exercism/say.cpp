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

string belowHun(int decInt){
    string result = "";
    int digInt = 0;
    
    if(decInt > 10 && decInt < 20){
        result = teens(decInt);
    } else if(decInt > 0 && decInt < 10){
        result = digit(decInt);
    }
    if(decInt >= 20){
        digInt = decInt % 10;
        if(digInt > 0){
            result = digit(digInt);
        }

    decInt -= digInt;
    result = decimal(decInt) + result;
    }
    
    return result;
    
}

string cent(int number){
    string result = "";
    
    if(number > 0){
        result = digit(number) + " hundred and " + result;
    }
    
    return result;
}

string belowTh(int number){
    string result = "";
    int decInt = 0;
    int centInt = 0;
    
    decInt = number % 100;
    centInt = number / 100;
    result = belowHun(decInt);
    result = cent(centInt) + result;
    
    return result;
}

string belowMil(int number){
    string result = "";
    int decInt = 0;
    int centInt = 0;
    
    decInt = number % 100;
    centInt = number / 100;
    result = belowHun(decInt) + " thousand and ";
    result = cent(centInt) + result;
    
    return result;
}

string belowBil(int number){
    string result = "";
    int decInt = 0;
    int centInt = 0;
    
    decInt = number % 100;
    centInt = number / 100;
    result = belowHun(decInt) + " million and ";
    result = cent(centInt) + result;
    
    return result;
}

string belowTrill(int number){
    string result = "";
    int decInt = 0;
    int centInt = 0;
    
    decInt = number % 100;
    centInt = number / 100;
    result = belowHun(decInt) + " billion and ";
    result = cent(centInt) + result;
    
    return result;
}


int main(){
    long int number = 0;
    string result = "";
    int thousand = 0;
    
    cout << "Enter a number between 0 to 999,999,999,999: ";
    cin >> number;
    
    if(number < 0 || number > 999999999999){
        cout << "Number not in range" << endl;
        return -1;
    }
    
    if(number < 1000){
        thousand = number % 1000;
        result = belowTh(thousand);
    } else if(number < 100000){
        thousand = number % 1000;
        result = belowTh(thousand);
        number = number / 1000;
        thousand = number % 1000;
        result = belowMil(thousand) + result;
    }else if(number < 100000000){
        thousand = number % 1000;
        result = belowTh(thousand);
        number = number / 1000;
        thousand = number % 1000;
        result = belowMil(thousand) + result;
        number = number / 1000;
        thousand = number % 1000;
        result = belowBil(thousand) + result;
    } else{
        thousand = number % 1000;
        result = belowTh(thousand);
        number = number / 1000;
        thousand = number % 1000;
        result = belowMil(thousand) + result;
        number = number / 1000;
        thousand = number % 1000;
        result = belowBil(thousand) + result;
        number = number / 1000;
        thousand = number % 1000;
        result = belowTrill(thousand) + result;
    }
    
    
    cout << result << endl;
    
    return 0;
}
