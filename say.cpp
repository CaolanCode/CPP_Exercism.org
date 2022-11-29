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

string belowTh(long int number){
    string result = "";
    int decInt = 0;
    int centInt = 0;
    int digInt = 0;
    decInt = number % 100;
    centInt = number / 100;
    
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
    if(centInt > 0){
        result = digit(centInt) + " hundred and " + result;
    }
        
    return result;
}

string belowMil(int number){
    string result = "";
    int decInt = 0;
    int centInt = 0;
    int digInt = 0;
    decInt = number % 100;
    centInt = number / 100;
    
    if(decInt > 10 && decInt < 20){
        result = teens(decInt) + " thousand and ";
    } else if(decInt > 0 && decInt < 10){
        result = digit(decInt) + " thousand and ";
    }
    if(decInt >= 20){
        digInt = decInt % 10;
        result = digit(digInt);
        decInt -= digInt;
        result = decimal(decInt) + result + " thousand and ";
    }
    if(centInt > 0){
        if(decInt > 0){
            result = digit(centInt) + " hundred and " + result;
        } else {
            result = digit(centInt) + " thousand and " + result;
        }
        
    }
        
    return result;
}

string belowBil(int number){
    string result = "";
    int decInt = 0;
    int centInt = 0;
    int digInt = 0;
    decInt = number % 100;
    centInt = number / 100;
    
    if(decInt > 10 && decInt < 20){
        result = teens(decInt) + " million and ";
    } else if(decInt > 0 && decInt < 10){
        result = digit(decInt) + " million and ";
    }
    if(decInt >= 20){
        digInt = decInt % 10;
        result = digit(digInt);
        decInt -= digInt;
        result = decimal(decInt) + result + " million and ";
    }
    if(centInt > 0){
        if(decInt > 0){
            result = digit(centInt) + " hundred and " + result;
        } else {
            result = digit(centInt) + " hundred million and " + result;
        }
    }
        
    return result;
}

string belowTril(int number){
    string result = "";
    int decInt = 0;
    int centInt = 0;
    int digInt = 0;
    decInt = number % 100;
    centInt = number / 100;
    
    if(decInt > 10 && decInt < 20){
        result = teens(decInt) + " billion and ";
    } else if(decInt > 0 && decInt < 10){
        result = digit(decInt) + " billion and ";
    }
    if(decInt >= 20){
        digInt = decInt % 10;
        result = digit(digInt);
        decInt -= digInt;
        result = decimal(decInt) + result + " billion and ";
    }
    if(centInt > 0){
        if(decInt > 0){
            result = digit(centInt) + " hundred and " + result;
        } else {
            result = digit(centInt) + " billion and " + result;
        }
        
    }
        
    return result;
}


int main(){
    long int number = 0;
    string result = "";
    int lessThou = 0;
    int lessMill = 0;
    int lessBill = 0;
    int lessTril = 0;
    int mod = 0;
    
    cout << "Enter a number between 0 to 999,999,999,999: ";
    cin >> number;
    
    if(number < 0 || number > 999999999999){
        cout << "Number not in range" << endl;
        return -1;
    }
    
    if(number < 1000){
        result = belowTh(number);
    } else if(number < 100000){
        lessThou = number % 1000;
        result = belowTh(lessThou);
        lessMill = number / 1000;
        result = belowMil(lessMill) + result;
    }else if(number < 100000000){
        lessThou = number % 1000;
        result = belowTh(lessThou);
        lessMill = number / 1000;
        lessBill = lessMill / 1000;
        lessMill = lessMill % 1000;
        result = belowMil(lessMill) + result;
        result = belowBil(lessBill) + result;
    } else{
        lessThou = number % 1000;
        result = belowTh(lessThou);
        number = number / 1000;
        lessMill = number % 1000;
        result = belowMil(lessMill) + result;
        number = number / 1000;
        lessBill = number % 1000;
        result = belowBil(lessBill) + result;
        number = number / 1000;
        lessTril = number % 1000;
        result = belowTril(lessTril) + result;
    }
    
    
    cout << result << endl;
    
    return 0;
}
