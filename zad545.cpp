#include <bits/stdc++.h>
using namespace std;

int main(){

    ifstream plik ("duze_liczby.txt");
    long srednia = 0;
    long l;
    long r = 0;
        for (int i = 0; i < 1000; i++) {
            plik >> l;
            srednia += l/1000;
            r += l%1000;
    }
        srednia += r / 1000;
        r %= 1000;
    cout << srednia << " " << r << "/1000" << endl;
    return 0;
}
