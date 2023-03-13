#include <bits/stdc++.h>
using namespace std;

int liczby[1000];

int icyfr(int x){
 int w = 1;
 while (x != 0){
  w = w * (x % 10);
  x = x / 10;
  }
  return w;
}

void A(){
    cout << "A: " << endl;
    int x = 0;
    for (int i = 0; i < 1000; i++){
        if (to_string(liczby[i]).size() > 5) x++;
    }
    cout << "liczb o > 5 cyfr jest: " << x << endl;
}

void B(){
    cout << "B: " << endl;
    int maks = 0;
    int kon = 0;
        for (int i = 0; i < 1000; i++){
            if (icyfr(liczby[i]) > maks) maks = icyfr(liczby[i]);
        }
            kon = maks;
        for (int j = 0; j < 1000; j++){
            if (icyfr(liczby[j]) == kon) cout << "liczba o naj iloczynie liczb: " << liczby[j] << endl;
        }
            cout << "najwiekszy iloczyn: " << kon << endl;
}
int main(){
    ifstream plik("liczby3.txt");
    //nazwa pliku zmieniona bo na komputerze byl juz plik "liczby"//
    for (int i = 0; i < 1000; i++){
        plik >> liczby[i];
    }
        A();
        B();
}
