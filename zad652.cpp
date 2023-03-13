#include <bits/stdc++.h>
using namespace std;

bool sortuj(pair<string, int> p1, pair<string, int> p2){
    return p1.second > p2.second;
}

vector <string> dane;
vector <pair<string, int>> vec;
map<string, int> mapa;

bool samogloski(string a){
    int b = 0;

    for(int i = 0; i < a.size(); i++){
            switch(a[i]){
                case 'A': b+=1;
                break;
                case 'E': b+=1;
                break;
                case 'I': b+=1;
                break;
                case 'O': b+=1;
                break;
                case 'U': b+=1;
                break;
                case 'Y': b+=1;
                break;
            }
        }
}

void A(){
    string najdl = dane[0];
    string najkr = dane[0];
    for(int i = 0; i < dane.size(); i++){
        if(dane[i+1].size() - samogloski(dane[i+1]) > najdl.size() - samogloski(najdl)) najdl = dane[i+1];
        if(dane[i].size() - samogloski(dane[i]) < najkr.size() - samogloski(najkr)) najkr = dane[i];
    }
    cout << "A) " << endl;
    cout << "najdluzsze: " << najdl << " " <<  "najkrotsze: " << najkr << endl;
}

void B(){
    cout << "B) " << endl;
    for (int i = 0; i < dane.size(); i++){
        mapa[dane[i]]++;
    }
    for (pair<string, int> p: mapa) vec.push_back(p);
    sort(vec.begin(), vec.end(), sortuj);
    int i = 0;
    for (pair <string, int> p: vec) {
        if (i == 10) break;
        cout << p.first<< " " << p.second << endl;
        i++;
    }

}

int main(){
    ifstream plik ("tekst.txt");
    string napis;

    while (plik >> napis){
    dane.push_back(napis);
    }
    A();
    B();
    return 0;
}
