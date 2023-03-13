#include <iostream>
#include <cstdio>
using namespace std;

double euro = 4.58;
double dolar = 3.97;

int main() {
    int pln = 0;
    cout << "Podaj ilość PLN";
    cin >> pln;
    cout << "Kwota w dolarach " << pln/dolar << " Kwota w euro " << pln/euro << endl;
    return 0;
}
