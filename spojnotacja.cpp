#include <bits/stdc++.h>
using namespace std;

vector<string> pobierz(string s){
    stringstream os;
    os << s;
    string ss;
    vector <string> wyrazenie;
    while (os >> ss){
        wyrazenie.push_back(ss);
    }
    return wyrazenie;
}

bool znak(string s){
    if(s[0] >= '0' && s[0] <= '9') return false;
    return true;
}

int dzialanie(int a, int b, char znak){
    switch (znak){
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return a / b;
    case '%': return a % b;
    case '^': return pow(a, b);
  }
}


int wylicz(vector<string> v){
    stack <int> st;
    for(string s: v){
    if(znak(s)){
        int a = st.top();
        st.pop();
        int b = st.top();
        st.pop();
        int t = dzialanie(b, a, s[0]);
        st.push(t);
    }
    else {
        st.push(stoi(s));
    }
    }
    return st.top();
}

int priority(char oper) {
  switch(oper) {
  case '(':
    return 0;
  case '+':
  case '-':
  case '–':
  case ')':
    return 1;
  case 'x':
  case '*':
  case '/':
  case '%':
    return 2;
  case '^':
    return 3;
  default:
    cout << "BŁAD" << endl;
  }
}

string naONP (string s){
    stack <char> stos;
    string str;
    for(char ch:s){
        if(!(ch >= '0' && ch <= '9')){
            if (ch == '{'){
                stos.push(ch);
            }
            else if (ch == '}'){
                while (stos.top() != '{'){
                    str += stos.top();
                    str += " ";
                    stos.pop();
                }
                stos.pop();
            }
            if (stos.size() == 0){
                stos.push(ch);
            }
            else {
                int p = priority(ch);
                while (p < priority(stos.top())){
                    str += stos.top();
                    str += " ";
                    stos.pop();
                }
                stos.push(ch);
            }
            else {
                str += ch;
                str += " ";
            }
        }
        while (stos.size() > 0){
            str += stos.top();
            str += " ";
            stos.pop();

        }
    }
}


int main(){
    string s1 = "2 7 + 3 / 14 3 − 4 × + 2 /";
    string s2 = "5 1 2 + 4 × + 3";
    vector<string> v = pobierz(s1);
    cout << wylicz(v) << endl;
    v = pobierz(s2);
    cout << wylicz(v) << endl;
    string s4 ="3+4×2/(1−5)^2";
    cout << naONP(s4) << endl;
    return 0;
}
