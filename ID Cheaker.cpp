#include <iostream>
using namespace std;
int birthplace(char, int);
int total(char, int);

int main() {
    char ID[10];
    for (int i = 1; i < 10; i++){
        ID[i] = 0;
    }
    cout << "請輸入身分證字號:";
    cin >> ID;
    int id;
    ID[0] = birthplace(ID[0], id);
    int sum = 0;
    for (int i = 1; i < 9; i++){
        sum = sum + total(ID[i], i);
        cout << sum << endl;
    }
    sum = sum + ID[0];
    cout << sum;
    if (sum % 10 == 0){
        cout << "正確";
    } else if (sum % 10 + ID[9] - '0'== 10){
        cout << "正確";
    } else {
        cout << "錯誤";
    }
    return 0;
}

int birthplace(char birthplace, int i = 0){
    switch(birthplace){
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
            i = (birthplace - 'A') * 9 + 1;
            return i;
            break;
        case 'J':
        case 'K':
            i = (birthplace - 'B') * 9 + 1;
            return i;
            break;
        case 'L':
        case 'M':
        case 'N':
            i = (birthplace - 'L') * 9 + 2;
            return i;
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
            i = (birthplace - 'M') * 9 + 2;
            return i;
            break;
        case 'X':
        case 'Y':
            i = (birthplace - 'X') * 9 + 3;
            return i;
            break;
        case 'I':
            i = 39;
            return i;
            break;
        case 'O':
            i = 48;
            return i;
            break;
        case 'W':
            i = 21;
            return i;
            break;
        case 'Z':
            i = 30;
            return i;
            break;
    }
}

int total(char IDnum, int num){
    IDnum = IDnum - '0';
    if (num == 1){
        IDnum = IDnum * 8;
    } else if (num == 2){
        IDnum = IDnum * 7;
    } else if (num == 3){
        IDnum = IDnum * 6;
    } else if (num == 4){
        IDnum = IDnum * 5;
    } else if (num == 5){
        IDnum = IDnum * 4;
    } else if (num == 6){
        IDnum = IDnum * 3;
    } else if (num == 7){
        IDnum = IDnum * 2;
    } else if (num == 8){
        IDnum = IDnum * 1;
    } 
    
    return IDnum;
}
