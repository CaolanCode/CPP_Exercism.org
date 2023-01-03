//
//  nucleotideCount.cpp
//  CPP-Exercises
//
//  count the nucleotides in a dna strand
//

#include <iostream>
using namespace std;

int main(){
    char dna[18] = {'G','A','G','C','C','T','A','C','T','A','A','C','G','G','G','A','T','U'};
    int g = 0;
    int a = 0;
    int c = 0;
    int t = 0;
    int invalid = 0;
    
    for(int i = 0; i < 18; i++){
        if(dna[i] == 'G')
            g++;
        else if(dna[i] == 'A')
            a++;
        else if(dna[i] == 'C')
            c++;
        else if(dna[i] == 'T')
            t++;
        else
            invalid++;
    }
    
    cout << "G: " << g << ", A: " << a << ", C: " << c << " T: " << t << " Invalid: " << invalid << endl;
}
