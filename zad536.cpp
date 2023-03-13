#include <bits/stdc++.h>
using namespace std;

int silnia (int k){
    if (k==0) return 1;
    if (k < 2) return k;
    return k*silnia(k-1);
}
int main(){
    int n, k;
    cin >> n >> k;
    cout << "\n" << n << "! / " << k << "! * (" << n << " - "<< k << ")! = " << silnia(n)/(silnia(k)*silnia(n-k));
}
