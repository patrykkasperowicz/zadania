#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    int prev_1 = 0;
    int prev_2 = 1;
    int prev_3 = 2;
    int act = 0;
    if(n > 0) cout << prev_3 << "\t";
    for(int i = 1; i < n; i++)
    {
        act = prev_1 + prev_2 + prev_3;
        cout << act << "\t";
        prev_1 = prev_2;
        prev_2 = prev_3;
        prev_3 = act;
    }
    cout << endl;
    return act;
}

int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}
