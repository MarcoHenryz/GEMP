#include <bits/stdc++.h>
#include <queue>

/*
 * Tem bastante semelhança com a queue, mas o maior elemento está sempre a
 * frente
 */
using namespace std;

int main(int argc, char *argv[]) {

  priority_queue<int> fila1;
  priority_queue<double> fila2;

  fila1.push(3);
  fila1.push(5);
  fila1.push(4);

  // encontrar maior elemento
  cout << fila1.top() << "\n";

  // remover primeiro elemento, basta usar .pop()
  //
  fila1.pop();

  cout << fila1.top() << "\n";

  // todas as operacoes na priority queue tem complexidade log n

  return 0;
}
