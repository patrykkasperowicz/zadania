#include <bits/stdc++.h>
using namespace std;

int main(){
    int liczby[1000];
    ifstream liczba("liczby.txt");
    for(int i = 0; i < 1000; i++){
        liczba >> liczby[i];
        cout << liczby[i] << endl;
        }
}
