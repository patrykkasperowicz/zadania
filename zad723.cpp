#include <bits/stdc++.h>
using namespace std;

char literka(long l){
    if(l < 10) return (char)('0' + l);
    return (char) ('A' - 10 + l);
}

string toString(long liczba){
    string s;
    while (liczba > 0){
    s = literka(liczba % 36) + s;
    liczba /= 36;
    }
    return s;
}

int main(){
    ifstream plik("ukryty_napis.txt");
    long l;
    while (plik >> l) cout << toString(l) << " ";
    cout << endl;
}
