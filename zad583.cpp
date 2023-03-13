#include <bits/stdc++.h>
using namespace std;


long long potega2 (long x, long n){
    long w = 1;
    x %= 10;
    while (n > 0){
        w = w%10;
        if(n % 2 == 1) w *= x%10;
        x = (x%10)*(x%10);
        n /= 2;
    }
    return w%10;
}

int main(){
    long long a, x, n;
    cin >> a;
    for (int i = 0; i < a; i++){
        cin >> x;
        cin >> n;
        cout << potega2(x, n) << endl;
    }
    return 0;
}
