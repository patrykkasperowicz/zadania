#include <bits/stdc++.h>
using namespace std;

vector <pair<char, int>> vec;

bool sortuj(pair<char,int> p1, pair<char, int> p2){
    return p1.second > p2.second;
}

int main(){
    map <char, int> mapa;
    string napis;
    cin >> napis;
    for (int i = 0; i < napis.size(); i++){
        mapa[napis[i]]++;
    }
    for (pair<char, int> p: mapa) vec.push_back(p);
    sort(vec.begin(), vec.end(), sortuj);
    for (pair <char, int> p: vec) cout << p.first<< " " << p.second << endl;
    for (pair <char, int> p: mapa) cout << p.first<< " " << p.second << endl;
    return 0;
}
