//
//  queenAttack.cpp
//  CPP-Exercises
//
//  Queen Attack
//  given two positions of queen on a chess board, output if they can attack each other
//  position are letter number i.e 'c5' or 'f2'
//

#include <iostream>
using namespace std;

void printArray(int bi, int bj, int wi, int wj){
    char board[10][19] = {{' ',' ','a',' ','b',' ','c',' ','d',' ','e',' ','f',' ','g',' ','h',' ',' '},
        {'8',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','8'},
        {'7',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','7'},
        {'6',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','6'},
        {'5',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','5'},
        {'4',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','4'},
        {'3',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','3'},
        {'2',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','2'},
        {'1',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','_',' ','1'},
        {' ',' ','a',' ','b',' ','c',' ','d',' ','e',' ','f',' ','g',' ','h',' ',' '}
    };
    
    
    
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 19; j++){
            if(i == bi && j == bj){
                board[bi][bj] = 'B';
            } else if(i == wi && j == wj){
                board[wi][wj] = 'W';
            }
        }
    }
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 19; j++){
            cout << board[i][j];
        }
        cout << endl;
    }
}

string getWhite(){
    string wq;
    cout << "Enter the white queens position: ";
    cin >> wq;
    return wq;
}

string getBlack(){
    string bq;
    cout << "Enter the black queens position: ";
    cin >> bq;
    return bq;
}

int getColumn(char position){
    int col = 0;
    
    switch (position) {
        case 'a':
            col = 2;
            break;
        case 'b':
            col = 4;
            break;
        case 'c':
            col = 6;
            break;
        case 'd':
            col = 8;
            break;
        case 'e':
            col = 10;
            break;
        case 'f':
            col = 12;
            break;
        case 'g':
            col = 14;
            break;
        case 'h':
            col = 16;
            break;
        default:
            break;
    }
    
    return col;
}

int getRow(char row){
    int x = 0;
    
    switch (row) {
        case '1':
            x = 8;
            break;
        case '2':
            x = 7;
            break;
        case '3':
            x = 6;
            break;
        case '4':
            x = 5;
            break;
        case '5':
            x = 4;
            break;
        case '6':
            x = 3;
            break;
        case '7':
            x = 2;
            break;
        case '8':
            x = 1;
            break;
            
        default:
            break;
    }
    
    return x;
}

void checkPosition(int bi, int bj, int wi, int wj){
    if(bi == wi || bj == wj){
        cout << "The queens can attack!" << endl;
    } else if(wi < bi){
        if(bi - wi == bj/2 - wj/2){
            cout << "The queens can attack!" << endl;
        }
    } else if(bi < wi){
        if(wi - bi == wj/2 - bj/2){
            cout << "The queens can attack!" << endl;
        }
    }
}

int main(){
    int bi, bj, wi, wj = 0;
    string bq, wq;
    
    wq = getWhite();
    bq = getBlack();
    
    bi = getRow(bq[1]);
    bj = getColumn(bq[0]);
    wi = getRow(wq[1]);
    wj = getColumn(wq[0]);
    
    printArray(bi, bj, wi, wj);
    
    checkPosition(bi, bj, wi, wj);
    
    
    
    
    
        return 0;
}
