#include <bits/stdc++.h>
using namespace std;

    void bubbleSort(int table[1001], int Size)
{
    bool unsorted = true;
    int temp;
    while (unsorted){
	unsorted = false;
	for (int i = 1; i < Size; i++) {
	    if (table[i-1] > table[i]) {
		temp = table[i];
		table[i] = table[i-1];
		table[i-1] = temp;
		unsorted = true;
	    }
	}
    }
}

    bool LP(int a) {
      for (int i = 2; i < a; i++) {
        if (a % i == 0) {
          return false;
        }
      }
      return true;
    }
    int NWD(int n, int m){
    int reszta;
    while(true){
    reszta = n % m;
    if(reszta == 0) return m;
    n = m;
    m = reszta;
    }

    return 0;
}

int main(){
    ifstream liczby("zestaw.txt");
    int max = 0;
    int suma = 0;
    double srednia = 0;
    int min =1000000;
    int x [1001];
    int pierwsze = 0;
    int w;
    int q;
    int c;
    int a;
    int naj = 0;

    for (int i = 0; i < 1001; i++){
        liczby >> x[i];
    }

    for (int i = 0; i < 1001; i++){
        if(x[i] >  max ){
        max = x[i];
        }
    }
    for (int i = 0; i < 1001; i++){
        if(x[i] < min ){
        min = x[i];
        }
        }

    bubbleSort(x, 1001);

    for (int i = 0; i < 1001; i++){
        suma = x[i] + suma;
    }
    srednia = suma / 1001.0;

    for (int i = 0; i < 1001; i++){
        if(LP (x[i]) == true ){
            pierwsze = pierwsze + 1;
        }
        }
    for (int i = 0; i < 1001; i++){
        if(NWD(x[i], 2358) > q){
        naj = x[i];
        q = NWD(x[i], 2358);
        }

    }
     for (int i = 0; i < 1001; i++){
        if(NWD(x[i], 2358) > a){
        a = NWD(x[i], 2358);
        }
    }


    cout.precision(2);
    cout << "Max: " << max << "\n" << "Min: " << min <<"\n" << "Mediana: " << x[500] << "\n" << "Srednia: " << fixed << srednia << "\n" << "Pierwsze: " << pierwsze;
    cout << "\n" << "Liczba, której NWD z liczbą 2358 jest największe : " << naj << "\n" << "Jej NWD z liczba 2358 wynosi: " << a;
}
