#include <bits/stdc++.h>
using namespace std;


struct Galeria{
string panstwo;
string miasto;
vector <int> lokale;
set <int> unikalne;
int powierzchnia;

void drukuj(){
    cout << miasto << " " << powierzchnia << " " << "lokali: " << lokale.size() << endl;
}
};

vector <Galeria> galerie;

void A(){
    map <string, int> mapa;
    for (Galeria g: galerie) mapa[g.panstwo]++;
    cout << "A) " << endl;
    for (pair<string, int> p: mapa){
        cout << p.first << " " << p.second << endl;
    }
    }

void B(){
    cout << "\nB) podpunkt a) " << endl;
    for(Galeria g: galerie)g.drukuj();
    cout << "\nB) podpunkt b) " << endl;
    string miastoMax, miastoMin;
    int powierzchniaMax = 0;
    int powierzchniaMin = INT_MAX;
    for(Galeria g: galerie){
        if(g.powierzchnia > powierzchniaMax){
            powierzchniaMax = g.powierzchnia;
            miastoMax = g.miasto;
        }
        if(g.powierzchnia < powierzchniaMin){
            powierzchniaMin = g.powierzchnia;
            miastoMin = g.miasto;
        }
    }
    cout << miastoMax << " " << powierzchniaMax << endl;
    cout << miastoMin << " " << powierzchniaMin << endl;
}

void C(){
    cout << "\nC)" << endl;
    string miastoMax, miastoMin;
    int unikalneMax = 0;
    int unikalneMin = INT_MAX;
    for(Galeria g: galerie){
        if(g.unikalne.size() > unikalneMax){
            unikalneMax = g.unikalne.size();
            miastoMax = g.miasto;
        }
        if(g.unikalne.size() < unikalneMin){
            unikalneMin = g.unikalne.size();
            miastoMin = g.miasto;
        }
    }
    cout << miastoMax << " " << unikalneMax << endl;
    cout << miastoMin << " " << unikalneMin << endl;
}

int main(){
ifstream plik ("galerie.txt");
int a, b;
for (int i = 0; i < 50; i++){
    Galeria g;
    g.powierzchnia = 0;
    plik >> g.panstwo >> g.miasto;
    for (int j = 0; j < 70; j++){
        plik >> a >> b;
        if(a>0){
            g.lokale.push_back(a*b);
            g.unikalne.insert(a*b);
            g.powierzchnia += a*b;
        }
    }
    galerie.push_back(g);
}
A();
B();
C();
//for(Galeria g: galerie)g.drukuj();
 return 0;
}
