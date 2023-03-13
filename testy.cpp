#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int x;
        cin >> x;
        if (x % 2 == 0) cout << "TAK";
        else cout << "NIE";
    }
    return 0;
}
