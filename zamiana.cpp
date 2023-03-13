#include <bits/stdc++.h>
using namespace std;


int main(){
    int a;
    int b = 2;
    cout << "podaj rozmiar tablicy "<< endl;
    cin >> a;
    int* tab;
    tab = new int[a];
    tab[a-1] = 10;
    delete [] tab;
    return 0;
}
