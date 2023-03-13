#include <bits/stdc++.h>
using namespace std;

struct Ulamek{
int licznik;
int mianownik;
void drukuj(){
    cout << licznik << "/" << mianownik << endl;
    }
    Ulamek operator+(Ulamek &u){
            Ulamek wynik;
            int nwd = __gcd(mianownik, u.mianownik);
            int nww = mianownik / nwd * u.mianownik;
            wynik.mianownik = nww;
            wynik.licznik = licznik * nww / mianownik + u.licznik * nww / u.mianownik;
            int nwd3 = __gcd(wynik.mianownik, wynik.licznik);
            wynik.mianownik /= nwd3;
            wynik.licznik /= nwd3;
            return wynik;
    }
        Ulamek operator-(Ulamek &u){
            Ulamek wynik;
            int nwd = __gcd(mianownik, u.mianownik);
            int nww = mianownik / nwd * u.mianownik;
            wynik.mianownik = nww;
            wynik.licznik = licznik * nww / mianownik - u.licznik * nww / u.mianownik;
            int nwd3 = __gcd(wynik.mianownik, wynik.licznik);
            wynik.mianownik /= nwd3;
            wynik.licznik /= nwd3;
            return wynik;
    }
        Ulamek operator*(Ulamek &u){
            Ulamek wynik;
            int nwd1 = __gcd(mianownik, licznik);
            int nwd2 = __gcd(u.mianownik, u.licznik);
            wynik.mianownik =(mianownik/nwd1) * (u.mianownik/nwd2);
            wynik.licznik = (licznik/nwd1) * (u.licznik/nwd2);
            int nwd3 = __gcd(wynik.mianownik, wynik.licznik);
            wynik.mianownik /= nwd3;
            wynik.licznik /= nwd3;
            return wynik;
    }
        Ulamek operator/(Ulamek &u){
            Ulamek wynik;
            int nwd1 = __gcd(mianownik, licznik);
            int nwd2 = __gcd(u.mianownik, u.licznik);
            wynik.mianownik =(mianownik/nwd1) * (u.licznik/nwd2);
            wynik.licznik = (licznik/nwd1) * (u.mianownik/nwd2);
            int nwd3 = __gcd(wynik.mianownik, wynik.licznik);
            wynik.mianownik /= nwd3;
            wynik.licznik /= nwd3;
            return wynik;
    }
        bool operator < (Ulamek &u){
            Ulamek u1;
            u1.licznik = u.licznik;
            u1.mianownik = u.mianownik;
            Ulamek u2;
            u2.licznik = licznik;
            u2.mianownik = mianownik;
            uprosc(u1);
            uprosc(u2);
            int nwd = __gcd(mianownik, u.mianownik);
            int nww = u1.mianownik / nwd * u2.mianownik;
            u1.licznik = u1.licznik*nww/u1.mianownik;
            u2.licznik = u2.licznik*nww/u2.mianownik;

            if(u2.licznik == u1.licznik) return mianownik < u.mianownik;
            return u2.licznik < u1.licznik;
        }
          void uprosc(Ulamek &u){
            int nwd = __gcd(u.licznik, u.mianownik);
            u.licznik = u.licznik / nwd;
            u.mianownik = u.mianownik / nwd;
        }


};

    void uprosc(Ulamek &u){
            int nwd = __gcd(u.licznik, u.mianownik);
            u.licznik = u.licznik / nwd;
            u.mianownik = u.mianownik / nwd;
            }

    vector <Ulamek> dane;

    void A(){
        Ulamek minimum = dane[0];
        for (Ulamek u: dane){
            if (u < minimum){
                minimum = u;
            }
        }
        cout << "A) " << endl;
        minimum.drukuj();
    }

    void B(){
        int n = 0;
        for (Ulamek u: dane){
            int nwd = __gcd(u.licznik, u.mianownik);
            if (nwd == 1) n++;
        }
        cout << "B) " << endl;
        cout << n << endl;
    }

    void C(){
        long suma  = 0;
        for (Ulamek u: dane){
            uprosc(u);
            suma += u.licznik;
        }
        cout << "C) " << endl;
        cout << suma << endl;
    }

    void D(){
        long suma = 0;
        const long mianownik = 2*2*3*3*5*5*7*7*13;
        for (Ulamek u: dane){
            suma += u.licznik * (mianownik/u.mianownik);
        }
        cout << "D) " << endl;
        cout << suma << endl;
    }

int main(){
    ifstream plik("dane_ulamki.txt");
    for (int i = 0; i < 1000; i++){
        Ulamek u;
        plik >> u.licznik >> u.mianownik;
        dane.push_back(u);
        }
    A();
    B();
    C();
    D();
    return 0;
}
