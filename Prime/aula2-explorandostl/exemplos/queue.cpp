#include <bits/stdc++.h>
#include <queue> // fila

using namespace std;

int main(int argc, char *argv[]) {

  queue<int> fila;

  fila.push(1);
  fila.push(3);
  fila.push(4);
  fila.push(9);

  cout << fila.front() << endl;
  fila.pop();

  cout << fila.front() << endl;
  fila.pop();

  cout << fila.front() << endl;
  fila.pop();

  cout << fila.front() << endl;
  fila.pop();

  // Assim como na pilha, podemos utilizar size() e empty() para imprimir os
  // elementos presentes em uma fila. Esse processo apaga os elementos

  fila.push(1);
  fila.push(5);
  fila.push(8);
  fila.push(10);

  while (!fila.empty()) {

    cout << fila.front();
    fila.pop();
  }

  return 0;
}
