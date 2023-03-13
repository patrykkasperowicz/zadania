#include <iostream>
using namespace std;
double obwod(double R);
int main()
{
  double r;
  cout << "Podaj promień okręgu: ";
  cin >> r;
  cout << "Obwód okręgu wynosi " << obwod(r) << endl;
  return 0;
}
//---------------------------
double obwod(double R)
{
  const double Pi = 3.14;
  return 2.0 * Pi * R;
}
