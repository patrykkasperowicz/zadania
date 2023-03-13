#include <bits/stdc++.h>
using namespace std;

string sortuj (string s){
    string wynik = {};
    int x = s.size();
    char tab[x];

    for (int i = 0; i < x; i++){
        tab[i] = s[i];
    }
    sort (tab, tab + x);

    for (int i = 0; i < x; i++){
        wynik += tab[i];
    }
    return wynik;
}

bool palindrom(string s1){
    for (int i = 0; i < s1.size()/2; i++){
        if(s1[i] != s1[s1.size() - 1 - i]) return false;
    }
    return true;
}
long long cnl(char c){
    if (c>= '0' && c <= '9') return c - '0';
    return c - 'A' + 10;
}

long long na16 (string s){
    long w = 0;
    int licznik = 1;
    for (int i = s.size(); i > 0; i--){
        w = cnl(s[i-1])*licznik+w;
        licznik *= 16;
    }
    return w;
}

string slowa[1000];

void A(){
    cout << "A: " << endl;
    int a = 0;
    for (int i = 0; i < 1000; i++){
     if (palindrom(slowa[i])){
        a++;
        if (slowa[i].size() == 8) cout << slowa[i] << endl;
    }
    }
    cout << "ilość palindromów: " << a << endl;
}


void B(){
    int wynik = 0;
    string wyn;
    long long a = na16(slowa[0]);

    for (int i = 0; i < 1000; i++){
        if(a > na16(slowa[i])){
        wynik = na16(slowa[i]);
        a = na16(slowa[i]);
        wyn = slowa[i];
        }
}
cout << "B: " << endl;
cout << "min: " << wynik << " " << wyn << endl;

}

void C(){
    long wynik = 0;
    string wyn;
    long long a = na16(slowa[0]);

    for (int i = 0; i < 1000; i++){
        if(a < na16(slowa[i])){
        wynik = na16(slowa[i]);
        a = na16(slowa[i]);
        wyn = slowa[i];
        }
    }
    cout << "max: " << wynik << " " << wyn << endl;
}

void D(){
    cout << "C: " << endl;
    sort(slowa, slowa + 1000);
    for (int i = 0; i < 5; i++){
        cout << slowa[i] << endl;
    }
    for (int i = 995; i < 1000; i++){
        cout << slowa[i] << endl;
    }
}

void E(){
    cout << "D: " << endl;
    int x = 0;
    for (int i = 0; i < 1000; i++){
        string s = slowa[i];
        if(s.size() == 6){
           if (sortuj(s) == "ABCDEF") x++;
            }
    }
     cout << x << endl;
}


int main(){
    ifstream plik ("ciagi.txt");
    for (int i = 0; i < 1000; i++){
        plik >> slowa[i];
    }
    A();
    B();
    C();
    D();
    E();
    return 0;
}
