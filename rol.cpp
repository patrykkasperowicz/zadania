/* int size){
    for (int i = 0; i < tab.size(); i++){
        tab[i] = tab[i+2];
    }
}

int main(){
    int x;
    cin >> x;
    for (int i = 0; i < x; i++){
        int y;
        cin >> y;
        int tab[y];
            for (int i = 0; i < y; i++){
                cin >> tab[i];
            }
            rol(tab, y);
    }
}*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, tab[100];
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> n;
        for(int j = 0; j < n; j++)
            cin >> tab[j];
        for(int j = 1; j < n; j++)
            cout << tab[j] << " ";
        cout << tab[0] <<endl;
    }
}
