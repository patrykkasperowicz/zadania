#include <iostream>
using namespace std;
int main()
{
  cout << "Wpisz z ilu ocen chcesz wyliczyć średnią:" ;
  int ile;
  cin >> ile;
  cout << "\n Wpisz kolejno oceny i po każdej ocenie wciśnij klawisz ENTER. " << endl;
  double srednia = 0;
  double ocena = 0;
  for (int i = 0; i < ile; i++)
  {
    cout << i +1 << " : ";
    cin >> ocena;
    srednia += ocena;     // to samo co: srednia = srednia + ocena;
    cout << endl;
  }
  srednia /= ile;     // to samo co: srednia = srednia / ile;
  cout << "\n Średnia ocen wynosi: \t" ;
  cout.precision(3);
  cout << srednia << endl;
  return 0;
}
