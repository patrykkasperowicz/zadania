#include <bits/stdc++.h>
using namespace std;


vector<pair<double, double>>punkty;


bool funkcjaPole(double a, double b){
        double hb = 30/(a*a);
        int r2 = (a-3)*(a-3) + (b-3)*(b-3);
        return b >= hb && 9 <= r2;
    }

int main(){
    ifstream plik("losowe.txt");
    double a;
    double b;
    int n = 0;
    for (int i = 0; i < 20000; i++){
        plik >> a >> b;
        if(funkcjaPole(a, b)) n++;
    }
        cout << n << endl;
        cout << "Pole: " << 36.0*n/20000 << endl;

    return 0;
}
