//
//  differenceSq.cpp
//  CPP-Exercises
//
//  difference of squares
//  square of the sum of the first ten natural numbers is (1+2+...+10)^2=55^2=3025
//  sum of the squares 1^2 + 2^2 + ... + 10^2 = 385
//

#include <iostream>
using namespace std;

int square(){
    int sum = 0;
    int i = 1;
    
    while(i < 11){
        sum += i;
        i++;
    }
    sum *= sum;
    
    return sum;
}

int sum(){
    float sum = 0;
    int i = 1;
    
    while(i < 11){
        sum += i * i;
        i++;
    }
    
    return sum;
}

int main(){
    
    cout << square() << "-" << sum() << "=" << (square()-sum()) << endl;
}
