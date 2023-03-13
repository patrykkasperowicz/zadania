#include <bits/stdc++.h>
using namespace std;

int liczby [1000];

bool palindrom(string s1){
    for (int i = 0; i < s1.size()/2; i++){
        if(s1[i] != s1[s1.size() - 1 - i]) return false;
    }
    return true;
}

int scyfr(int x){
 int w = 0;
 while (x != 0){
  w = w + (x % 10);
  x = x / 10;
  }
  return w;
}

void A(){
    cout << "A: " << "\n" << endl;
    cout << "maksymalna parzysta: " << endl;
    int wynik = 0;
    int maks = 0;
    for (int i = 0; i < 1000; i++){
      if (liczby[i]%2 == 0){
        maks = liczby[i];
        if(maks > wynik) wynik = maks;
    }
    }

    cout << wynik << endl;
}

void B(){
    cout << "B: " << "\n" << endl;
    cout << "palindromiczne: " << endl;
    for (int i = 0; i < 1000; i++){
        if (palindrom(to_string(liczby[i]))) cout << liczby[i] << endl;
    }
}

void C(){
    cout << "C: " << "\n" << endl;
    cout << "liczby o sumie cyfr > 30: " << endl;
    int wynik = 0;
    for (int i = 0; i < 1000; i++){
        if (scyfr(liczby[i]) > 30) cout << liczby[i] << endl;
    }
    for (int i = 0; i < 1000; i++){
        wynik = wynik + scyfr(liczby[i]);
    }
    cout << "\n" << "suma wszystkich cyfr: " << wynik << endl;
}

int main(){
    ifstream plik ("liczby2.txt");
    for (int i = 0; i < 1000; i++){
        plik >> liczby[i];
    }
    A();
    B();
    C();
}
