#include <bits/stdc++.h>
using namespace std;

long fib(long n){
    cout << "fib(" << n << ")" << endl;
    if (n<2) return n;
    return fib(n-1) + fib(n-2);
}

long long fibpetla(long long n){
    long long a = 0;
    long long b = 1;
    long long f = 0;
    if(n < 2) return n;
        for(int i = 1; i <= n; i++){
            f = a + b;
            b = a;
            a = f;
        }
        return f;
}
int main(){
    int x = 0;
    int y = 0;
    cout << "Podaj liczbę do ciągu: " << endl;
    //cin >> x;
    cin >> y;
    //cout << fib(x) << endl;
    cout << fibpetla(y) << endl;
    return 0;
}
