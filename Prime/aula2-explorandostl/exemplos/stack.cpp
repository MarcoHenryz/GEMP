/*

*/
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {

  stack<int> pilha;

  pilha.push(3);
  pilha.push(8);
  pilha.push(9);

  cout << pilha.top() << endl;

  pilha.pop();

  cout << pilha.top() << endl;

  pilha.pop();

  cout << pilha.top() << endl;

  pilha.push(1);
  pilha.push(3);
  pilha.push(8);
  pilha.push(10);

  // size e empty(retorna um bool se a pilha estiver vazia), podemos iterar na
  // pilha da seguinte forma

  cout << endl;

  while (!pilha.empty()) {

    cout << pilha.top() << endl;
    pilha.pop();
  }

  return 0;
}
