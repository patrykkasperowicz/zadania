#include <bits/stdc++.h>
using namespace std;

double funkcja (int k, int n){

    double wynik = 0;
    const double p = pow(20, 1.0/3.0);

    for (int i = k; i <= n; i++){
        wynik += p/(2*k);
    }
    return wynik;

}

int main(){
    int k, n;
    cout << "Podaj wartość liczby n i liczby k" << endl;
    cin >> n >> k;
    cout << funkcja(k, n) << endl;
    return 0;
}

