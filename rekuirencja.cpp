#include <iostream>
using namespace std;

double power(double result, double base, int exponent)
{
    cout << "REKURENCJA " << exponent << endl;
    if(exponent == 0) return 1;
    else return power(result*base, base, exponent - 1);
}

int main()
{
    double base;
    int exp;
    cin >> base >> exp;
    cout << endl;
    cout << power(1, base, exp) << endl;
    return 0;
}
