#include <bits/stdc++.h>
using namespace std;

int tab1[1000];
int tab2[1000];
int tab3[1000];

int nwd (int x, int y){
    int sum;
    while (x != y){
        if(x > y){
            x = x - y;
        }
        else if (y > x){
            y = y - x;
        }
    }
    sum = x;
    return sum;
}

int scyfr(int x){
 int w = 0;
 while (x != 0){
  w = w + (x % 10);
  x = x / 10;
  }
  return w;
}


void A(){
    cout << "A: " << endl;
    int x = 0;
    for (int i = 0; i < 1000; i++){
    if (tab1[i] < tab2[i] && tab2[i] < tab3[i]) x++;
    }
    cout << x << endl;
}
void B(){
    int wynik = 0;
    cout << "B: " << endl;
    for (int i = 0; i < 1000; i++){
    wynik += nwd(nwd(tab1[i], tab2[i]), tab3[i]);
    }
    cout << wynik << endl;
}

void C(){
    cout << "C: " << endl;
    int x = 0;
    int y = 0;
    int z = 0;

    for (int i = 0; i < 1000; i++){
        if (scyfr(tab1[i]) + scyfr(tab2[i]) + scyfr(tab3[i]) == 35) x++;
    }
    cout << x << endl;
    for (int i = 0; i < 1000; i++){
         if (scyfr(tab1[i]) + scyfr(tab2[i]) + scyfr(tab3[i]) > y){
            y = scyfr(tab1[i]) + scyfr(tab2[i]) + scyfr(tab3[i]);
         }
    }
    cout << y << endl;

    for (int i = 0; i < 1000; i++){
        if (scyfr(tab1[i]) + scyfr(tab2[i]) + scyfr(tab3[i]) == 88) z++;
    }
    cout << z << endl;
}

int main(){
    ifstream pliki ("liczby1.txt");
    for (int i = 0; i < 1000; i++){
        pliki >> tab1[i];
        pliki >> tab2[i];
        pliki >> tab3[i];
    }
    A();
    B();
    C();
}
