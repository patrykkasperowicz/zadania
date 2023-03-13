#include <bits/stdc++.h>
using namespace std;

class Napisy{
    private:
    string ciag[1000];
    int i = 0;

    public:
    Napisy(){
    }

    void print(){
        for (int j = 0; j < i; j++){
            cout << ciag[j] << " " << endl;
        }
    }

     void add(string s1){
        ciag[i] = s1;
        i+=1;
    }

    void pop(){
        if (i>=0){
            ciag[i]={};
            i=-1;
        }
    }

    void check(){
        cout << "\n\nlast item in stock: " << ciag[i-1] << "\n\n" << endl;
    }

    void THEsize(){
        cout << i << endl;
    }

};

int main(){

    return 0;
}
