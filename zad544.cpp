#include <bits/stdc++.h>
using namespace std;

long double horner(long double tab[], long size, long double x)
{
    long double y = tab[0];
    for(int i = 1; i < size; i++)
    {
        y = y*x + tab[i];
    }
    return y;
}

int main(){
    long ilosc;
    cin >> ilosc;
    long stopien;
    cin >> stopien;
    int size = stopien+1;
    long q;
    long double *tab = new long double [size];

    for (int i = 0; i < size; i++){
        cin >> tab[i];
    }
    cin >> q;
    long *zapytania = new long [q];

    for (int i = 0; i < q; i++){
        cin >> zapytania[i];
    }
    cout << "\n" << endl;
    for (int i = 0; i < q; i++){
        cout << horner(tab, size, zapytania[i]) << endl;
    }
    delete []tab;
    delete []zapytania;

}
