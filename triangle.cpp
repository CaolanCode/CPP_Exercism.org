//
//  triangle.cpp
//  CPP-Exercises
//
//  Determine if a triangle is:
//  Equilateral = all side equal
//  Isosceles = Two sides are equal
//  Scalene = all sides are different
//

#include <iostream>
using namespace std;

void triangle(int a, int b, int c){
    
    if(a == b && a == c){
        cout << "This triangle is Equilateral" << endl;
    } else if(a == b || a == c){
        cout << "This triangle is Isosceles" << endl;
    } else {
        cout << "This triangle is Scalene" << endl;
    }
}


int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    
    cout << "Enter length of a: ";
    cin >> a;
    cout << "Enter length of b: ";
    cin >> b;
    cout << "Enter length of c: ";
    cin >> c;
    triangle(a, b, c);
    
    return 0;
}
