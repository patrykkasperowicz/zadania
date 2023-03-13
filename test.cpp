#include <bits/stdc++.h>
using namespace std;

long long cnl(char c){
    if (c>= '0' && c <= '9') return c - '0';
    return c - 'A' + 10;
}
int main(){
    char c;
    cin >> c;
    cout << cnl(c) << endl;
    return 0;
}
