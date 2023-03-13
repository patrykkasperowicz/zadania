#include<bits/stdc++.h>
using namespace std;

vector <string> dane;
vector <pair<string, int>> vec;
map<string, int> mapa;

bool wieksza (string a, string b){
    return a>b;
}

bool mniejsza (string a, string b){
    return a<b;
}


bool sortowanie(pair<string, int> p1, pair<string, int> p2){
    return p1.second > p2.second;
}

void A(){
    cout << "A) "<< endl;
    cout << "najwieksze" << endl;
    sort (dane.begin(), dane.end(), wieksza);
    for(int i = 0; i < 2000; i++){
        if(i == 5) break;
        cout << dane[i] << endl;
    }


}

void C(){
cout << "najmniejsze: " << endl;
    sort(dane.begin(), dane.end(), mniejsza);
     for(int i = 0; i < 2000; i++){
        if(i == 5) break;
        cout << dane[i] << endl;
    }
}

void B(){
    cout << "B) " << endl;
    for (int i = 0; i < dane.size(); i++){
        mapa[dane[i]]++;
    }
    for (pair<string, int> p: mapa) vec.push_back(p);
    sort(vec.begin(), vec.end(), sortowanie);
    int i = 0;
    for (pair <string, int> p: vec) {
        if (i == 10) break;
        cout << p.first <<  endl;
        i++;
    }

}

int main(){
    ifstream plik ("zero_jedynki.txt");
    string napis;
    for (int i = 0; i < 2000; i++){
        plik >> napis;
        dane.push_back(napis);
    }
    A();
    C();
    B();
}
