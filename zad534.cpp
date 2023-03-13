#include <bits/stdc++.h>
using namespace std;

int tab[100];
int i = 0;

long binarny(int n){
    if (n == 1 ){
        tab[i] = 1;
        return 1;
    }
    tab[i] = n%2;
    i++;
    return binarny(n/2);
}

int main(){
    int n, z;
    cin >> n;
    z = binarny (n);
    for (int j = 0; j <= i; j++){
        cout << tab[i-j];
    }
}
