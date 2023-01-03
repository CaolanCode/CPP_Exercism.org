//
//  grains.cpp
//  CPP-Exercises
//
//  A grain of wheat is on the first square of the chess board
//  It is number of grains is doubled on each successive square
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long total = 0;
    long long inSquare = 1;
    
    for(int i = 0; i < 64; i++){
        cout << "Square " << i+1 << ": " << inSquare << endl;
        total += inSquare;
        inSquare *= 2;
    }
    cout << "Total grains on chess board " << total << endl;
    
    return 0;
}
