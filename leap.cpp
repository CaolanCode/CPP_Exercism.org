//
//  leap.cpp
//  CPP-Exercises
//
//  Leap year
//  every year divisible by 4
//  except every year that is evenly divisible by 100
//  unless the year is also evenly divisible by 400
//
#include <iostream>
using namespace std;

bool leap(int year){
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                return true;
            }
        } else {
            return true;
        }
    }
    return false;
}

int main(){
    
    int year = 0;
    
    cout << "Enter a year to check if it's a leap year: ";
    cin >> year;
    
    if(leap(year)){
        std::cout << year << " is a leap year" << std::endl;
    } else {
        std::cout << year << " is not a leap year" << std::endl;
    }
    
    return 0;
}
