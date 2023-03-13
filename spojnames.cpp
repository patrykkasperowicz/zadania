#include <bits/stdc++.h>
using namespace std;

vector <pair<string, int>> vec;

bool sortuj(pair<string, int> p1, pair<string, int> p2){
    return p1.second > p2.second;
}


string toHigherCase(string s){
    for (int i = 0; i < s.size(); i++){
        if(s[i] >= 97) s[i] -= 32;
    }
    return s;
}



int main(){
    map<string, int> mapa;
    int i = 0;
    string tab[100000];
    string imie, nazwisko, c;


    while(cin >> c >> nazwisko >> imie){
        imie = toHigherCase(imie);
        tab[i] = imie;
        mapa[imie]++;
    }


    for (pair<string, int> p: mapa) vec.push_back(p);
    sort(vec.begin(), vec.end(), sortuj);
    for (pair <string, int> p: vec) cout << p.first<< " " << p.second << endl;

    return 0;
}
