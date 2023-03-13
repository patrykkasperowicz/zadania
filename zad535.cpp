#include <bits/stdc++.h>
using namespace std;

int sumacyfr (long n){
    if ( n < 10 ) return n;
    return (n%10) + sumacyfr(n/10);
}
int main(){
    long n;
    cin >> n;
    cout << sumacyfr(n) << endl;
}
