#include <bits/stdc++.h>
using namespace std;

long double pierwiastek(long A){
    const double delta = 0.001;
    double x1 = 2;
    double x2= (x1+A/x1)/2.0;
    while(abs(x2 - x1) > delta){
        x1 = x2;
        x2 = (x1+A/x1)/2;
    }
    return x2;
}

int main(){
    ifstream plik("pierwiastki_calkowite.txt");
    cout.precision(10);
    long calk[100000];
    int calkowita = 0;
    for (int i = 0; i< 100000; i++){
        plik >> calk[i];
    }

    for (int i = 0; i < 100000; i++){
        int x = pierwiastek(calk[i]);
        cout << fixed << pierwiastek(calk[i]) << endl;
        if(x % 2 == 0) calkowita++;
        if(x % 2 == 1) calkowita++;
    }
    cout << calkowita << endl;


    return 0;
}
