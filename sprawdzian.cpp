#include <bits/stdc++.h>
using namespace std;

void A(){
    for(int i = 0; i < 1000; i++){
        if (liczby[i] % 2 != 0){
            a++;
        }
    }
    cout << a << endl;
}

int main(){
    int liczby[1000];
    ifstream plik("ciagi.txt");
    for(int i = 0; i < 1000; i++) plik >> liczby[i];
    A();
}
