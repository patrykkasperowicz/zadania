#include <bits/stdc++.h>
using namespace std;

string az[1000];

long cnl(char c){
    if (c>= '0' && c <= '9') return c - '0';
    return c - 'A' + 10;
}

long long naSzesnastkowy (string s){
    long long w = 0;
    long licznik = 1;
    for (int i = s.size(); i > 0; i--){
        w = cnl(s[i-1])*licznik+w;
        licznik *= 16;
    }
    return w;
}

long long naDziesietny (string s){
    long long w = 0;
    long licznik = 1;
    for (int i = s.size(); i > 0; i--){
        w = cnl(s[i-1])*licznik+w;
        licznik *= 10;
    }
    return w;
}


bool palindrom(string s1){
    for (int i = 0; i < s1.size()/2; i++){
        if(s1[i] != s1[s1.size() - 1 - i]) return false;
    }
    return true;
}
void A(){
int a = 0;

for (int i = 0; i < 1000; i++){
    if(palindrom(az[i]) == 1) a++;
}
cout << "A: " << a << endl;
}

void B(){
    int wynik = 0;
    string wyn;
    int a = naDziesietny(az[0]);

for (int i = 0; i < 1000; i++){
    if(a > naDziesietny(az[i])){
        wynik = naDziesietny(az[i]);
        a = naDziesietny(az[i]);
        wyn = az[i];
        }
}
cout << "B: ";
cout << "min: " << wynik << " " << wyn << endl;

}

void C(){
    long wynik = 0;
    string wyn;
    long a = naSzesnastkowy(az[0]);

for (int i = 0; i < 1000; i++){
    if(a < naSzesnastkowy(az[i])){
        wynik = naSzesnastkowy(az[i]);
        a = naSzesnastkowy(az[i]);
        wyn = az[i];
        }
}
cout << "   max: " << wynik << " " << wyn << endl;
}

void D(){
    cout << "C: " << "sus";
}


int main(){
ifstream kody ("ciagi.txt");
for (int i = 0; i < 1000; i++) kody >> az[i];
//for (int i = 0; i < 1000; i++) cout << sus[i] << endl;

A();
B();
C();
D();
}
