#include <bits/stdc++.h>
using namespace std;

int potega(int x, int n){
    int a = 0;
    if(n == 0) return 1;
    if (n % 2 != 0){
        return x * potega(x, n - 1);
    }
    else{
        a = potega(x, n/2);
        return a*a;
    }
}

int main(){
    int x, n;
    cin >> x >> n;
    cout << potega(x, n) << endl;
    return 0;
}
