#include <bits/stdc++.h>
using namespace std;

string dopisz(char s, int x){
        string w;
        if (x > 2) return w + s + to_string(x);
        if (x == 2) return w + s + s;
        if (x == 1) return w + s;
    }
string dopisz2(string s, int x){
        string ostatnia = s[0];
        for (int i = 1; i < s.size; i++){
        if (s[i] = ostatnia) x++;
        else
    }
}

string kompresja(string s){
       string wynik = {};
        int i = 1;
        int x = 1;
        char ostatnia = s[0];
        while (i<s.size()){
            if (s[i] == ostatnia) x++;

            else {
                wynik += dopisz (ostatnia, x);
                ostatnia = s[i];
                x = 1;
            }
        i++;

    }
    wynik += dopisz(ostatnia, x);
    return wynik;
}

//string dekompresja(string s){

//}

int main(){
    string x;
    string s[1000];
    int i = 0;
    int ile [1000];
    while (cin >> s[i]) i++;
    if (x == "KOMPRESJA"){
        cout << kompresja(s) << endl;
    }
    if (x == "DEKOMPRESJA"){
        string s;
        cin >> s;
        dekompresja(s);
    }
}
