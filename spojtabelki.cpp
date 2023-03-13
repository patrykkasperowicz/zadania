#include <bits/stdc++.h>
using namespace std;

/*struct TAB{
    int** tab;
    TAB(int x, int y){
        tab = new int*[x];
        for (int i = 0; i < x; i++){
            tab = new int*[y];
        }
        for (int i = 0; i < x; i++){
            for (int j = 0; j < y; j++){
                cin >> tab[i][j];
            }
    }
}

};*/


struct TAB{
    int* a;
    TAB(int x, int y){
        int tab [x][y];
        for (int i = 0; i < x; i++){
            for (int j = 0; j < y; j++){
                cin >> tab[i][j];
            }
    }
     /*for (int i = 0; i < x; i++){
            for (int j = 0; j < y; j++){
                cout << tab[i][j] << endl;
            }
    }*/
}

};

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int x, y;
        cin >> x >> y;
        TAB a(x, y);
        }
    return 0;
}
