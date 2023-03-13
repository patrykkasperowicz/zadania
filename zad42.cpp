#include <bits/stdc++.h>
using namespace std;

int t[42] = {2, 3, 5, 6, 7, 9, 12, 13, 14, 15, 17, 18, 19, 23, 24, 26, 27, 28, 34, 35, 38, 42, 43, 45, 48, 52, 53, 54, 56, 59, 61, 65, 66, 67, 70, 73, 74, 75, 77, 78, 92, 99};

int binarne (const int szukane) {
  int a = 0; int b = 40;
  int c;
  while(a < b){
    c = (a + b)/2;
   if(t[c] == szukane) return t[c];
   else if(t[c] > szukane) {
      b = c-1;
    } else a = c+1;
    //cout << a << " " << b << endl;
  }
  if(t[a] == szukane) return t[a];
  else if (t[a] < szukane){
    if (a == 40) return t[40];
    if(abs(t[a] - szukane) < abs(t[a+1]) - szukane) return t[a];
    if(abs(t[a] - szukane) > abs(t[a+1]) - szukane) return t[a+1];
  }
}
int main(){
    int liczba;
    cin >> liczba;
    int i = binarne(liczba);
    cout << "najbliższa liczba to: " << i << endl;
    return 0;
}
