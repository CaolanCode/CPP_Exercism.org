//
//  nthPrime.cpp
//  CPP-Exercises
//
//  get the nth prime number when given n
//

#include <iostream>
using namespace std;

bool isPrime(int num){
    if(num < 2){
        return false;
    }
    
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return false;
        }
    }
    
    return true;
}

int nthPrime(int num){
    int count = 0;
    int primeCount = 0;
    
    while(primeCount <= num){
        if(isPrime(count)){
            primeCount++;
        }
        if(primeCount == num){
            break;
        }
        count++;
    }
    return count;
}

int main(){
    int n = 0;
    cout << "Enter a number to get the nth prime number: ";
    cin >> n;
    
    cout << nthPrime(n) << endl;
    
    return 0;
}
