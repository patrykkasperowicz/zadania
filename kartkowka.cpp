/* wczytaj całe zdanie i wypisz co drugą literę ze zdania nieparzystą */
#include <bits/stdc++.h>
using namespace std;

int main(){
string s;
getline(cin, s);
int n = 0;
for (int i = 0; i < s.size(); i++ ){
    if (s[i]/2 == 2){
        cout << s[i] << endl;
    }
}
return 0;
}

