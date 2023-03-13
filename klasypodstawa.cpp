#include <bits/stdc++.h>
using namespace std;
class Zespolone(){
    public:
    Zespolone(){
        re = (double)(rand) / 1000.0
        im = (double)(rand) / 1000.0
    }
}
void drukuj(){
    cout << re << " "<< im << endl;
}
double modul(){
    return sqrt(im*im + re*re)
}
double getIm(){
    return im;
}
private:
double re;
double im;

int main(){
    srand(time(NULL));
    Zespolone zesp(34.5, 63.7)
    if(zesp.getIm())
}
