#include <bits/stdc++.h>
using namespace std;

stack<char> operatorStack;

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
    return -1;
  }
}

bool isDigit(char c) {
  return c >= '0' && c <= '9';
}

vector<string> getElements(string expr) {
  vector<string> elements;
  string s;
  for(int i = 0; i < expr.length(); i++) {
    while( i < expr.length() && isDigit(expr[i])) s += expr[i++];
    if(s.size() > 0) {
        elements.push_back(s);
        s.clear();
    }
    if(expr[i] == ' ') {
    } else if(priority(expr[i]) >= 0) {
      s += expr[i];
      elements.push_back(s);
      s.clear();
    } //else cout << "BŁĄD " << expr[i] <<endl;
  }
  if(s.size() > 0) {
    elements.push_back(s);
    s.clear();
  }

  return elements;
}

void printStack(stack<char> s){
 while(s.size() != 0) {cout << s.top(); s.pop();}
}

string toONP(string expr) {

  vector<string> elements = getElements(expr);
  string onp;
  //for(auto e: elements) cout << e << endl;
  int p;
  for(auto e: elements){
   if(e.size() == 0) continue;
   //cout << "wejście: " << e << " stos: ";
   //printStack(operatorStack);
   //cout  << endl;
   if(isDigit(e[0])) {
     onp += e;
     onp += ' ';
   } else {
     p = priority(e[0]);
     if(p == 0) operatorStack.push(e[0]);
     else if(p == 1 && e[0] == ')'){
      while(!operatorStack.empty() && operatorStack.top() != '('){
        onp += operatorStack.top();
        onp += ' ';
        operatorStack.pop();
      }
      if(operatorStack.top() == '(') operatorStack.pop();
     } else if(operatorStack.size() == 0 || (priority(operatorStack.top()) < p)) {
      operatorStack.push(e[0]);
      } else {
       while(operatorStack.size() != 0 && priority(operatorStack.top()) >= p) {
        onp += operatorStack.top();
        onp += ' ';
        operatorStack.pop();
       }
       operatorStack.push(e[0]);
     }
   }
  }
  while(operatorStack.size() != 0) {
       onp += operatorStack.top();
       onp += ' ';
       operatorStack.pop();
  }

  return onp;
}

double solve(double a, double b, char o){
  switch(o){
   case '+':
    return a + b;
   case '-':
    return a - b;
   case '*':
    return a * b;
   case '/':
    return a / b;
   case '^':
    return pow(a, b);
  }
}

double fromONP_result(string onp){
  vector<string> elements = getElements(onp);
  stack<double> numbers;
  //cout << "fromONP size elements " << elements.size() << endl;
  double a, b, r;
  for(auto e: elements){
   //cout << e << " ";
   if(isDigit(e[0])){
    numbers.push(stoi(e));
   } else {
     if(numbers.size() < 2){
      return -1;
     }
     a = numbers.top();
     numbers.pop();
     b = numbers.top();
     numbers.pop();
     r = solve(b, a, e[0]);
     numbers.push(r);
   }

  }
 if(numbers.size() != 1) cout << "błędne wyrażenie ONP " << endl;
 return numbers.top();
}

int main() {
  string e = "12 + 5 * (11 * 2 + 4 / 2)";
  string onp = toONP(e);
  cout << e << " => ONP: " << onp << endl;
  cout << "powinno być: " << "12 5 11 2 * 4 2 / + * +" << endl;
  cout << "wynik: " << fromONP_result(onp) << " powinno być: 132" << endl;
 // operatorStack.
  e = "3+4*2/(1-5)^2";
  onp = toONP(e);
  cout << e << " => ONP: " <<  onp << endl;
  cout << "powinno być: " << "3 4 2 * 1 5 - 2 ^ / +" << endl;
  cout << "wynik: " << fromONP_result(onp) << " powinno być: 3.5" << endl;
  e = "(1+2) * 4 + 5 - 3";
  onp = toONP(e);
  cout << e << " => ONP: " << onp << endl;
  cout << "powinno być: " << "1 2 + 4 * 5 + 3 -" << endl;
  cout << "wynik: " << fromONP_result(onp) << " powinno być: 14" << endl;
  return 0;
}
