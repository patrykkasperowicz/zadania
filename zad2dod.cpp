#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int n = 0;
    char ostatnia = ' ';
    for(char c: s) {
        if(ostatnia == ' '&& c != '\t' && c != '\n') n++;
        ostatnia = c;
    }
    cout << "Ilość słow wynosi: " << n << endl;
    return 0;
}

