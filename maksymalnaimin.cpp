#include <bits/stdc++.h>

using namespace std;

int main() {

int N = 0;
int tab [1000];
cout << "Podaj ilość liczb" << endl;
cin >> N;
cout << "Podaj liczby" << endl;
for (int i = 0; i < N; i ++) cin >> tab[i];
int max = tab[0];
int min = tab[0];
for (int i = 1; i < N; i ++){
    if (tab[i] > max) max = tab[i];
    else if (tab[i] < min) min = tab[i];
}
cout << "Największa liczba to " << max << endl;
return 0;
}
