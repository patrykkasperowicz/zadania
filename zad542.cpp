#include <iostream>
using namespace std;
int main()
{
    int liczba = 22;
    int *wskaznik = &liczba;

    cout << "adres zmiennej=" << &liczba << endl;
    cout << "adres wskaznika=" << &wskaznik << endl;
    cout << "wartosc wskaznika=" << *wskaznik << endl;
    cout << "liczba=" << liczba << endl;
    //ustawienie liczby za pomocą wskaźnika na wartość 20
    *wskaznik = 20;
    cout << "liczba=" << liczba << endl;
    return 0;
}
