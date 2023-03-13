#include <bits/stdc++.h>
using namespace std;

double cosinus (int x){

    double wynik = 0;
    double poprzedni = -1;
    double p = 1;
    double s = 1;
    int i = 1;
    while(abs(poprzedni - wynik) > 0.001){
        p *= x;
        s *= i;
        if(i % 2 == 0){
            cout << "potęga " << p << " silnia " << s << endl;
            poprzedni = wynik;
            if (i % 4 == 0) wynik += p/s;
            else wynik -= p/s;
        }
        i++;
    }
    return wynik;

}

int main(){
    double kat;
    cin >> kat;
    cout << "Nasz: " << cosinus(kat) << "biblioteka: " << cos(kat) << endl;
    return 0;
}

