#include <bits/stdc++.h>
using namespace std;

double pierwiastek(double A){
    const double delta = 0.001;
    double x1 = 2;
    double x2= (x1+A/x1)/2.0;
    while(abs(x2 - x1) > delta){
        x1 = x2;
        x2 = (x1+A/x1)/2;
    }
    return x2;
}

double potega(double a, int n){
    double r = a;
    while (n>1){
        a = a*r;
        n--;
    }
    return a;
}

double potega2(double a, int n){
    double r = 1;
    while (n>1){
        if(n%2 == 1)r*=a;
        a*=a;
        n /=2;
    }
    return r*a;
}

double pierwiastek(double A, int n){
    const double delta = 0.001;
    double x1 = 2;
    double x2= ((n-1)*x1+A/potega2(x1, n-1))/n;
    while(abs(x2 - x1) > delta){
        x1 = x2;
        x2= ((n-1)*x1+A/potega2(x1, n-1))/n;
    }
    return x2;
}
int main(){
    cout.precision(10);
    cout << fixed << sqrt(80) << " " << pierwiastek(80) << endl;
    cout << fixed << pow(80, 1.0/4.0) << " " << pierwiastek(80, 4) << endl;

    return 0;
}
