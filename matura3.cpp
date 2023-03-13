#include <bits/stdc++.h>
using namespace std;

long pesel[1000];

void A(){
    cout << "A: " << endl;
    long
    int k = 0;
    int m = 0;
    for(int i = 0; i < 1000; i++){
        long t = pesel[i];
        t = t/10;
            if (t % 2 == 0 ) k++;
            else m++;

    }
    cout << "ilosc kobiet: " << k << endl;
    cout << "ilosc mezczyzn: " << m << endl;
}

void B(){
    cout << "B: " << endl;
    int x = 0;
        for (int i = 0; i < 1000; i++){
            long p = pesel[i];
            long d = pesel[i];
            p = p/100000000;
            p = p%10;
            d = d/10000000;
            d = d%10;
                if (p == 1 && d == 1) x++;
                if (p == 3 && d == 1) x++;

    }
    cout << x << endl;
}

void C(){
    cout << "C: " << endl;
        for (int i = 0; i < 1000; i++){
         long long pie = pesel[i];
         long long dru = pesel[i];
         long long trz = pesel[i];
         long long czw = pesel[i];
         long long pia = pesel[i];
         long long szo = pesel[i];
         long long sio = pesel[i];
         long long osm = pesel[i];
         long long dzi = pesel[i];
         long long dziesiata = pesel[i];
         long long jed = pesel[i];

          pie = pie/10000000000;
          pie = pie %10;

          dru = dru/1000000000;
          dru = dru %10;

          trz = trz/100000000;
          trz = trz %10;

          czw = czw/10000000;
          czw = czw %10;

          pia = pia/1000000;
          pia = pia %10;

          szo = szo/100000;
          szo = szo %10;

          sio = sio/10000;
          sio = sio %10;

          osm = osm/1000;
          osm = osm %10;

          dzi = dzi/100;
          dzi = dzi %10;

          dziesiata = dziesiata/10;
          dziesiata = dziesiata %10;

          jed = jed %10;

          if ((1*pie + 3 * dru + 7 * trz + 9 * czw + 1 * pia + 3 * szo + 7 * sio + 9 * osm + 1 * dzi + 3 * dziesiata + jed) % 10 != 0){
            cout << pesel[i] << endl;
          }
    }
}

int main(){
    ifstream plik ("dane1.txt");
    for (int i = 0; i < 1000; i++){
        plik >> pesel[i];
    }
    A();
    B();
    C();
}

