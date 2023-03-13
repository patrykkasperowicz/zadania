#include <bits/stdc++.h>
using namespace std;

string formula;
struct litery {
    char c;
    int n;
    string k;
};
litery tab[12];

bool sortuj(litery l1, litery l2){
    return l1.n > l2.n;
}

bool sortuj2(litery l1, litery l2){
    return l1.c < l2.c;
}

void drukuj(){
    for (int i = 0; i < 12; i++) cout << tab[i].c << " " << tab[i].n << " " << tab[i].k << endl;
}

string naBin(int n, int d){
    string s;
    while (n > 0){
        s = to_string(n%2) + s;
        n /= 2;
    }
    while (s.size() < d) s = "0" + s;
    return s;
}

int main(){
    ifstream plik ("formula.txt");
    plik >> formula;
    plik.close();

    for (int i = 0; i < 12; i++){
        tab[i].c = (char) ('A' + i);
        tab[i].n = 0;
    }
    for (int i = 0; i < formula.size(); i++){
        int litera = formula[i] - 'A';
        tab[litera].n++;
    }
    sort(tab, tab+12, sortuj);
    for (int i = 0; i < 4; i++){
        tab[i].k = naBin(i, 3);
    }
    for (int i = 4; i < 12; i++){
        tab[i].k = "1" + naBin(i-4, 3);
    }
    sort(tab, tab+12, sortuj2);
    //drukuj();
    string kod;
    for (char l: formula){
        kod += tab[l - 'A'].k;
    }
    //ofstream w("kod_formuly.txt");
    //w << kod << endl;
    cout << "formula romiar: " << formula.size() << " zakodowana: " << ceil(kod.size()/8.0) << endl;
    cout << "kompresja: " << formula.size() / (kod.size()/8.0) << endl;
    return 0;
}
