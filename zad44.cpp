#include <bits/stdc++.h>
using namespace std;



struct Pracownik{
    string imie;
    string nazwisko;
    string pesel;
    double msc[12];
        void drukuj(){
            cout << "Imie: " << imie << ", " << "Nazwisko: " << nazwisko << ", " << "Pesel: " << pesel << " " << "średnia płaca: ";
            cout << srednia() << endl;
}
    double srednia(){
        double s = 0;
        for(int i = 0; i < 12; i++) s+= msc[i];
        return s/ 12.0;
    }
};

    Pracownik a[200];

double srednia(){
    double s = 0;
    for(int i = 0; i < 200; i++) s += a[i].srednia();
    return s/200.0;
}

double maksimum(){
    for(int i = 0; i < 200; i++){
        if(srednia(0)>srednia(i)) wynik = srednia(i);
    }
    return wynik;
}

int main(){

    ifstream praca("pracownicy.txt");
    for(int i = 0; i < 200; i++){
        praca >> a[i].imie >> a[i].nazwisko >> a[i].pesel;
            for(int j = 0; j < 12; j++) praca >> a[i].msc[j];
    }
    for(int i = 0; i < 200; i++) a[i].drukuj();
    cout << "D: " << endl << srednia() << endl;
    cout << "E: " << endl;
    a[maksimum()].drukuj();
    return 0;
}
