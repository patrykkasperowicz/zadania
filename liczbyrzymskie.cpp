#include <bits/stdc++.h>
using namespace std;

int wartosc(char znak){
    switch(znak){
        case 'M' : return 1000;
        case 'D' : return 500;
        case 'C' : return 100;
        case 'L' : return 50;
        case 'X' : return 10;
        case 'V' : return 5;
        case 'I' : return 1;
        default : return 0;
    }
}

int naLiczby(string rz){
    int liczba = 0;
    int l;
    for (int i = 0; i < rz.size(); i++){
        l = wartosc(rz[i]);
        if(1 <= rz.size() - 1){
            int n = wartosc(rz[i+1]);
            if(n > l) liczba -= l;
            else liczba += l;
            } else liczba += l;
    }
    return liczba;
}

string rzymskie[] = {"M", "CM", "D", "CD", "C", "XC", "C", "DL", "XL", "X", "IX", "V", "IV", "I"};
int liczby[] = { 1000, 900, 500, 400, 100, 90. 50, 40, 10, 9, 5, 4, 1 };

//char rzymskie[] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};

string naRzymskie(int n){
    string rz;
    int i = 0;
    while (n > 0){
        if( n >= liczby[i]){
            n -= liczby[i];
            rz += rzyskie[i];
        } else i++;
    }
    return rz;
}
string suma (string rz1, string rz2){
    cout << naLiczby(rz1) << " " << naLiczby (rz2) << endl;
    return 0;
}

int main() {
    string rz1, rz2;
    while (cin >> rz1 >> rz2) {
    cout << rz1 << " " << rz2 << " = " << suma(rz1, rz2) << endl;
    }

}
