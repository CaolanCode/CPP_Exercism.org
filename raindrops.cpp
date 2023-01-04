//
//  raindrops.cpp
//  CPP-Exercises
//
//  Convert number into a string that contains a raindrop sound corresponding to certain potential factors
//  A factor is a number that evenly divides into another number, leaving no remainder
//  3 = Pling
//  5 = Plang
//  7 = Plong
//  return number if not divisible by the above numbers

#include <iostream>
using namespace std;

int main(){
    int num = 0;
    
    cout << "Enter a number to be divided: ";
    cin >> num;
    
    if(num % 3 == 0 || num % 5 == 0 || num % 7 == 0){
        if(num % 3 == 0){
            cout << "Pling";
        }
        if(num % 5 == 0){
            cout << "Plang";
        }
        if(num % 7 == 0){
            cout << "Plong";
        }
        cout << endl;
    } else {
        cout << num << endl;
    }
    
    return 0;
    
}
