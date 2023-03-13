#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream wejscie("plik.txt");
    ofstream wyjscie("srednia.txt");
    int n;
    wejscie >> n;
    wyjscie << n << endl;

    int oceny[100];
    int ilosc;
    int ocena;
    string nazwisko;

    for(int i = 0; i < n; i++){
        wejscie >> nazwisko;
        wejscie >> ilosc;
        double sr = 0.0;
        for(int j = 0; j < ilosc; j++){
            wejscie >> ocena;
            sr += ocena;
        }
        wyjscie << " " << sr/ilosc << endl;
    }

    wejscie.close();
    wyjscie.close();

    return 0;
}
