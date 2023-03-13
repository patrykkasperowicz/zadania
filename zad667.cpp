#include <bits/stdc++.h>
using namespace std;

    string dopisz(char s, int x){
        string s2;
        if (x > 2) return s2 + s + "*" + to_string(x);
        if (x == 2) return s2 + s + s;
        if (x == 1) return s2 + s;
    }

string skrot(string s){
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
int main(){
    int x;
    cin >> x;
    for (int i = 0; i < x; i++){
        string s;
        cin >> s;
        cout << skrot(s) << endl;
    }
    return 0;
}
