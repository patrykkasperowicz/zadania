#include <bits/stdc++.h>

using namespace std;

int main() {

int N = 0;
int tab [1000];
cout << "Podaj ilość liczb" << endl;
cin >> N;
cout << "Twoje liczby to: " << endl;
for (int i = 0; i < N; i++){
    tab[i] = rand();
    tab[i] = tab[i]/10000;
    cout << tab[i] << endl;
}
return 0;
}
