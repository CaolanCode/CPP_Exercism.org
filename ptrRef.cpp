//
//  ptrRef.cpp
//  CPP-Exercises
//
//  Pointers and references
//

#include <iostream>
using namespace std;

int main(){
    int var1 = 7;
    int var2 = 21;
    int* ptr;
    int var3 = 15;
    int& ref = var3;
    
    ptr = &var1;
    cout << "var1 address: " << ptr << endl;
    cout << "var1 value: " << *ptr << endl;
    cout << "change pointer value:" << endl;
    ptr = &var2;
    cout << "var2 address: "<< ptr << endl;
    cout << "var2 value: " << *ptr << endl;
    
    cout << "reference: " << ref << endl;
    
    return 0;
}
