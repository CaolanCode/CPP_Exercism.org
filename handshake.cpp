//
//  handshake.cpp
//  CPP-Exercises
//
//  Turn decimal into binary and output the secret handshake
//  reverse signals if greater than 16
//

#include <iostream>
using namespace std;

int * getBinary(int decimal){
    static int binary[8] = {0};
    int octet = 128;
    int i = 0;
    
    while(decimal > 0){
        if(decimal >= octet){
            binary[i] = 1;
            decimal -= octet;
        } else{
            binary[i] = 0;
        }
        octet /= 2;
        i++;
    }
    
    return binary;
}


int main(){
    int decimal = 0;
    bool greater = false;
    
    cout << "Enter a decimal value: ";
    cin >> decimal;
    
    if(decimal > 16){
        greater = true;
    }
    
    int *binary = getBinary(decimal);
    
    if(greater){
        for(int i = 0; i < 8; i++){
            cout << binary[i];
        }
        cout << endl;
    } else {
        for(int i = 7; i >= 0; i--){
            cout << binary[i];
        }
        cout << endl;
    }
    
    
    return 0;
}
