//
//  hamming.cpp
//  CPP-Exercises
//
//  Hamming Distance is the process of comparing differences in DNA strands
//  compare to array of C,A,G,T
//

#include <iostream>
using namespace std;

int main(){
    char dna1[17] = {'G','A','G','C','C','T','A','C','T','A','A','C','G','G','G','A','T'};
    char dna2[17] = {'C','A','T','C','G','T','A','A','T','G','A','C','G','G','C','C','T'};
    int count = 0;
    
    for(int i = 0; i < 17; i++){
        if(dna1[i] != dna2[i]){
            count++;
        }
    }
    cout << "There are " << count << " differences" << endl;
    
}
