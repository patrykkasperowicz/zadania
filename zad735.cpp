#include <bits/stdc++.h>
using namespace std;

vector<pair<double, int>>punkty;

long obliczPole(int N0, double lambda){
    int naleza = 0;
    for(pair<double, int> p: punkty){
        int N = N0 * exp(-lambda*p.first);
        if (N>=p.second) naleza++;
    }
    return naleza*20.0;
    }

int main(){
    ifstream plik1("punkty_losowe.txt");
    int N;
    double t;
    for (int i = 0; i < 100000; i++){
        plik1 >> t >> N;
        punkty.push_back(make_pair(t,N));
    }
    plik1.close();

    ifstream plik2("exponent_monte_carlo.txt");

    double lambda;
    long suma = 0;
    int N0;
    for(int i = 0; i < 100; i++){
        plik2 >> N0 >> lambda;
        cout << "Pole: " << obliczPole(N0, lambda) << endl;
        suma += obliczPole(N0, lambda);
    }

    cout << "SUMA: " <<  suma << endl;
    return 0;
}
