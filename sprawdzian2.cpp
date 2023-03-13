#include <bits/stdc++.h>
using namespace std;

int scyfr(int x){
    int w = 0;
    while (x != 0){
    w = w + (x % 10);
    x = x / 10;
    }
    return w;
}

int NWD(int d, int e){
    int r;
    while(true){
    r = d % e;
    if(r == 0) {
    return e;
}
    d = e;
    e = r;
    }
    return 0;
}

int main(){
    int liczby[1000];
    ifstream liczba("liczby.txt");
    int a = 0;
    int b = 0;
    int c = 0;

    for(int i = 0; i < 1000; i++){
        liczba >> liczby[i];
        if(liczby[i] % 2 != 0){
            a += liczby[i];
        }

        if(scyfr(liczby[i]) % 5 == 0){
            b++;
        }

        if (NWD(liczby[0], liczby[i]) != 1){
            c++;
        }

        }

        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "c: " << c << endl;
}
