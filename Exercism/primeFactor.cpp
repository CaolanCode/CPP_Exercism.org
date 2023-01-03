//
//  primeFactor.cpp
//  CPP-Exercises
//
//  Compute the prime factors of a given natural number.
//  A prime number is only evenly divisible by itself and 1.
//

#include <iostream>
using namespace std;

void primeFactor(int number){
    for(int i = 2; i < number/2; i++){
        while(number%i == 0){
            cout << i << ", ";
            number /= i;
        }
    }
    if(number > 2){
        cout << number << endl;
    }
}

int main(){
    int number = 0;
    
    cout << "Enter a number to recieve its prime factors: ";
    cin >> number;
    cout << "The prime factors of " << number << " are: ";
    primeFactor(number);
    
    return 0;
}
