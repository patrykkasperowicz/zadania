#include <bits/stdc++.h>

using namespace std;

int main() {
srand (time (NULL));
int N = 0;
cin >> N;
int tab[N];
for (int i = 0; i < N; i++){
    tab[i] = rand();
    tab[i] = tab[i]/1000000;
    cout << tab[i] << endl;

}
for (int i = 0; i < N; i ++) cout << tab[i] << endl;

return 0;
}
