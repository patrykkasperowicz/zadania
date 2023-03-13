#include <bits/stdc++.h>
using namespace std;

const int n = 1000;
const int m = 20;

struct dom{
    int nr;
    int mieszkania[m];
};

dom adresy [n];

int przesylki[n][m];

int binarne(int t[],const int n,const int szukane) {
  int a = 0; int b = n-1;
  int c;
  while(a < b){
    c = (a + b)/2;
   if(t[c] == szukane) return c;
   else if(t[c] > szukane) {
      b = c-1;
    } else a = c+1;
    cout << a << " " << b << endl;
  }
  if(t[a] == szukane) return a;
  else return -1;
}

int znajdzdomy(const int szukane) {
  int a = 0; int b = n - 1;
  int c;
  while(a < b){
    c = (a + b)/2;
   if(adresy[c].nr == szukane) return c;
   else if(adresy[c].nr > szukane) {
      b = c-1;
    } else a = c+1;
    cout << a << " " << b << endl;
  }
  if(adresy[a].nr == szukane) return a;
  else return -1;
}


int main(){
    ifstream plik1("adresy.txt");
    ifstream plik2("przesylki.txt");
    for (int i = 0; i < n; i++){
        plik1 >> adresy[i].nr;
            for(int j = 0; i < m; j++) plik1 >> adresy[i].mieszkania[j];
            }
    for(int i = 0; i < n; i++) plik2 >> przesylki[i][0] >> przesylki[i][1];
        int n;
        int nieIstnieja [200];
        int x;
    for (int i = 0; i < n; i++){
        n = znajdzdomy(przesylki[i][0]);
            if (n == -1) nieIstnieja[x++] = przesylki[i][0];
        }
cout << "Ilość z powtarzaniem: " << x << endl;
    sort (nieIstnieja, nieIstnieja + x);
    int y = 1;
    for(int i= 1; i < x; i++){
        if(nieIstnieja[i-1] != nieIstnieja[i]) y++;
}
cout << "A) " << y << endl;
}
