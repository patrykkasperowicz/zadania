#include <iostream>
using namespace std;
int main()
{
    int liczba = 0;

    int wykladnik = 0;

    int z = 1;


    cout << "Podaj liczbe ";
    cin >> liczba;
    cout << "Podaj wykladnik potegi ";
    cin >> wykladnik;


    for (int i = 0 ; i < wykladnik; i++)
  {
        z = wykladnik *= z;
  }
  cout << z << endl;
  }
