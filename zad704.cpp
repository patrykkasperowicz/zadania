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
    ifstream plik ("wielomiany.txt");
        for (int i = 0; i < 200; i++){
            plik >> l;
            cout << l << endl;
        }
}
