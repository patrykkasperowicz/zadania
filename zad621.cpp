#include <bits/stdc++.h>
using namespace std;

struct Macierz
{
int X;
int Y;
double** macierz;
Macierz(int x; int y;){
    X = x;
    Y = y;
    macierz = new double*[X];
    for (int i = 0; i < X; i++){
        macierz[i] = new double [Y];
    }
   }
    string toString(){
        ostringstream os;
        for (int i = 0; i < X; i++){
            for (int j = 0; j < Y; j++) os << macierz[i][j] << " ";
            os << endl;
        }
        return os.str();
    }
};

int main(){
    srand(time(NULL));
    int X, Y;
    cin >> X >> Y;
    Macierz m(X, Y);
    for (int i = 0; i < X; i++){
        for (int j = 0; j < Y; j++){
            m.macierz[i][j] = (double)(rand) % 1000.00
        }
          cout << m.toString();
    }
    return 0;
}
