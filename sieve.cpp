//
//  sieve.cpp
//  CPP-Exercises
//
//  Use the Sieve of Eratosthenes to find all the primes from 2 up to a given number.
//

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int limit = 0;
    cout << "Input a the limit of primes numbers you want returned: ";
    cin >> limit;
    bool results[limit-2];
    
    for(int i = 2; i <= limit; i++){
        results[i] = true;
    }
    
        
    for(int i = 2; i <= limit/2; i++){
        if(results[i] == true){
            int l = 1;
            for(int j = pow(i,2); j <= limit; j = pow(i,2)+l*i){
                results[j] = false;
                l++;
            }
        }
    }
    for(int i = 2; i < limit; i++){
        if(results[i] == true){
            cout << i << ", ";
        }
    }
}
