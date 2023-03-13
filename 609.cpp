#include <bits/stdc++.h>
using namespace std;

struct Uczen{
    int numer;
    string imie;
    string nazwisko;
    int poziom;
    char oddzial;
    void drukuj(){
        cout << numer << ": "<<nazwisko << " "<< imie << " klasa " << poziom << oddzial << endl;
    }
    string toString(){
        stringstream ss;
        cout << nazwisko << " " << imie << " | klasa" << poziom << oddzial << endl;
        return ss.str();
}
};

vector<Uczen>uczniowie;

string toLow(string s){
    for (int i = 0; i < s.size(); i++){
        if(s[i] < 97) s[i] += 32;
    }
    return s;
}

void spr(){
    cout << "Podaj naziwsko: ";
    string nazwisko;
    cin >> nazwisko;
    nazwisko = toLow(nazwisko);
    for(Uczen u: uczniowie){
        if (toLow(u.nazwisko) == nazwisko) u.drukuj();
    }
}

bool porownaj(Uczen u1, Uczen u2){
    if(u1.nazwisko == u2.nazwisko) return u1.imie < u2.imie;
    else return u1.nazwisko < u2.nazwisko;
}

int main(){
    ifstream plik("szablony_uczniowie.txt");
    for (int i = 0; i < 225; i++){
        Uczen u;
        plik >> u.numer >> u.nazwisko >>u.imie >> u.poziom >> u.oddzial;
        uczniowie.push_back(u);
    }
        //for(Uczen u: uczniowie){
         //   u.drukuj();
       // }
    spr();
    cout << "Sortowanie" << endl;
    ofstream zapis ("uczniowie_zapis.txt");
    sort (uczniowie.begin(), uczniowie.end(), porownaj);
    for(Uczen u: uczniowie) zapis << /*u.nazwisko << " " << u.imie << " " << u.poziom << u.oddzial << endl;*/ u.toString();
    int liczba;
    cin >> liczba;
    ss << hex << liczba;
    cout << ss.str() << endl;
    return 0;
}
