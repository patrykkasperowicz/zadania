#include <iostream>
using namespace std;
int main() {
    char c;

    char samogloski[6] = {'A', 'E', 'I', 'O', 'U', 'Y'};
    cout << "Podaj pierwsza litere imienia " << endl;
    cin >> c;
    bool spolgoska = true;
    for (int i  = 0; i < 6; i++) if (c == samogloski[i]) spolgoska = false;

        if (spolgoska == true) cout << "Masz imie na spolgloske" << endl;
    else cout << "Masz imie na samogloske" << endl;
    return 0;

}
