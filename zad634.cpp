#include <bits/stdc++.h>
using namespace std;

struct Rzymskie{
    int d;
    Rzymskie(int liczba){
        d = liczba;
            }
    Rzymskie (string rz){
        naDziesiatkowe(rz);
            }
    void naDziesiatkowe(string rz){
        d = 0;
        for (int i = 0; i < rz.size(); i++){
        int n;
        n = wartosc(rz[i]);
            if (i < rz.size() - 1 && wartosc(rz[i+1])> n) d -= n;
            else d += n;
        }
    }
    string rzymskie(){
        string rz;
        int liczba = d;
        string znaki[] = {"M", "CM", "D", "CD","C" ,"XC","L", "XL", "X", "IX", "V", "IV", "I"};
        int wartosci[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        for(int i = 0; i < 12; i++){
        while(liczba >= wartosci[i]){
            rz += znaki[i];
            liczba -= wartosci[i];
        }

    }
    return rz;
    }
        int wartosc(char z){
            switch (z){
            case 'M' :return 1000;
            case 'D' :return 500;
            case 'C':return 100;
            case 'L' :return 50;
            case 'X' :return 10;
            case 'V' :return 5;
            case 'I':return 1;
            default: return 0;
        }
    }
};

int main(){
    /*string rz = "MMCMLXIV";
    Rzymskie rzym(rz);
    cout << rzym.d << endl;
    Rzymskie rzym2(rzym.d);
    cout << rzym2.rzymskie() << " == " << rz << endl;
    rzym.d += rzym2.d;
    cout <<rzym.rzymskie() << endl;*/
    string s1, s2;
    while(cin >> s1 >> s2){
        Rzymskie rz1(s1);
        Rzymskie rz2(s2);
        rz2.d += rz1.d;
        cout << rz2.rzymskie() << endl;
    }
    return 0;
}
