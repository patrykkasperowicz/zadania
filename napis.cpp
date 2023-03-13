#include <bits/stdc++.h>
using namespace std;

int main(){
    char litera = 'A';
    string napis = "aaa";
    cout << "Liter: " << napis.size() << endl;

    for (int i = 0; i < napis.size(); i++) cout << napis[i] << "\t";
    cout << endl;
    for(char l: napis) cout << l << " ";
    cout << endl;
    return 0;
}
