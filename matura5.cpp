#include <bits/stdc++.h>
using namespace std;

string napisy1 [200];
string napisy2 [200];

bool s(string s1, string s2){
    for (int i = 0; i < s1.size(); i++){
        if (s1[i] != s2[i]) return false;
    }
    return true;
}


int tyl (string s1, string s2){
    int x = 0;
    int najw = 0;
    for (int i = 0; i < s1.size(); i++){
        if (s1[s1.size()-1-i] != s2[s2.size()-1-i]){
            return x;
    }
    x++;
}
return x;

}

void A(){
    cout << "A: " << endl;
    int x = 0;
    for (int i = 0; i < 200; i++){
        if (napisy1[i].size() >= 3 * napisy2[i].size() || napisy2[i].size() >= 3 * napisy1[i].size()){
        x++;
        if (x == 1) cout << napisy1[i] << " " << napisy2[i] << endl;
        }
    }

    cout << x << endl;
}

void B(){
    cout << "B: " << endl;
    int x= 0;
    for (int i = 0; i < 200; i++){
        if (s(napisy1[i], napisy2[i])){
          x++;
          cout << napisy1[i] << " " << napisy2[i] << endl;
        }
    }
    cout << x << endl;
}

void C(){
    cout << "C: " << endl;
    int x;
    int maks = 0;
    for (int i = 0; i < 200; i++){
        x = tyl(napisy1[i], napisy2[i]);
            if (x > maks) maks = x;
            if (tyl(napisy1[i], napisy2[i]) == 15) cout << napisy1[i] << " " << napisy2[i] << endl;
    }
    cout << maks << endl;
}

int main(){
    ifstream plik ("napisy.txt");
    for (int i = 0; i < 200; i++){
        plik >> napisy1[i];
        plik >> napisy2[i];
    }
    A();
    B();
    C();
}
