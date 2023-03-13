#include <bits/stdc++.h>

using namespace std;

int main() {
    int N = 0;
    int wynik = 0;
    int tab[100000];
    cout << "Podaj ilość liczb" << endl;
    cin >> N;
srand (time (NULL));
for (int i = 0; i < N; i++){
    tab[i] = rand();
    tab[i] = tab[i]/1000000;
    cout << tab[i] << endl;
    wynik = wynik + tab[i];
}
cout << "Średnia arytmetyczna podanych liczb wynosi " << wynik/N << endl;
    return 0;
}
