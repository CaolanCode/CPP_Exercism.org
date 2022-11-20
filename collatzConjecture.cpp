//
//  collatzConjecture.cpp
//  CPP-Exercises
//
//  The Collatz Conjecture or 3x+1 problem
//  if n is even, divide n by 2 to get n/2
//  if n is odd, multiply n by 3 and add 1 to get 3n+1
//  Repeat the process indefinitely
//  The conjecture states that no matter which number you start with, you will
//  always reach 1 eventually
//

#include <iostream>
using namespace std;

int main(){
    int n = 0;
    int count = 1;
    
    cout << "Enter a number: ";
    cin >> n;
    
    cout << count << ". " << n << endl;
    while(n != 1){
        if(n % 2 == 0){
            n /= 2;
        } else if(n % 2 == 1){
            n = 3 * n + 1;
        }
        count++;
        cout << count << ". " << n << endl;
    }
    
}
