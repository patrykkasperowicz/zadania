#include <bits/stdc++.h>
using namespace std;
int main(){
    int lewa[1000];
    int prawa[1000];
    ifstream pary("PARY_LICZB.TXT");
    int a, b, c, d, e, f, g, h, j;

    for(int i = 0; i < 1000; i++){
        pary >> c;
        pary >> d;
        lewa[i] = c;
        prawa[i] = d;
        if(c % 2 == 0 && d % 2 == 0){
            a++;
        }
    }
    cout << "a: " << a;

    for(int i = 0; i < 1000; i++){

        if(lewa[i] > prawa[i]){
            b++;
        }
    }
    cout << "\n" << "b: "<< b;

    for(int i = 0; i > 1000; i++){

        if(lewa[i] % prawa[i] == 0 || prawa[i] % lewa[i] == 0){
            g++;
        }
    }
    cout << "\n" << "C: " << g;

    for(int i = 0; i < 1000; i++){

    }

}



