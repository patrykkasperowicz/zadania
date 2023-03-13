#include <bits/stdc++.h>
using namespace std;

long cnl(char c){
    if (c>= '0' && c <= '9') return c - '0';
    return c - 'A' + 10;
}

long toint(string s, int n){
    long w = 0;
    long pot = 1;
    for(int i = s.size() - 1; i >= 0; i--){
        w = w + cnl(s[i])*pot;
        pot = pot*n;
    }
    return w;
}

long dzialanie(int w, char z, int n){
    switch(z){
    case '+': return w+n;
    case '-': return w-n;
    case '*': return w*n;
    case '%': return w%n;
    default: return 0;
}
}
int main(){
    ifstream pliki("dzialania.txt");
    string s;
    long w;
    long l;
    char z;
    pliki >> s >> l;
    w = toint(s, l);
    //cout << slowo << " " << liczba << endl;
    for (int i = 0; i < 50; i++){
        pliki >> z >> s >> l;
        w = dzialanie(w,z,toint(s,l));
        //cout << znak << " " << slowo << " " << liczba << " " << endl;
    }
    cout << w << endl;

    return 0;
}
