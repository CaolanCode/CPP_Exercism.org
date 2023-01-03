//
//  gigasecond.cpp
//  CPP-Exercises
//
// Given a moment, determine the moment that would be after a gigasecond has passed.
// A gigasecond is 10^9 (1,000,000,000) seconds.
//

#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;

int main(){
    time_t currentTime;
    time_t gigaTimeSec;
    
    time(&currentTime);
    
    gigaTimeSec = currentTime + pow(10,9);
    
    char* gigaTimeString = ctime(&gigaTimeSec);
    
    cout << "In a gigasecond it will be: " << gigaTimeString << endl;
    
    return 0;
}
