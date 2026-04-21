#include <bits/stdc++.h>
#include <set>

/*
Set é uma estrutura de dados da STL que guarda elementos distintos de maneira
ordenada. Ele possui funções insert(), erase(), find() com complexidade (log n),
sendo n o tamanho do conjunto. É uma estutura item por já estar implementada em
C++, simples de ser utilizada e tornar alguns algoritmos mais eficientes

Importante a base sobre ponteiros

Set não permite a presença de elementos repetidos.
*/

using namespace std;

int main(int argc, char *argv[]) {

  set<int> conjunto;

  cout << "Elementos Set:" << endl;

  conjunto.insert(5);

  conjunto.insert(12);

  conjunto.insert(3);

  conjunto.insert(8);

  for (auto x : conjunto)
    cout << x << endl;

  conjunto.erase(5);

  cout << "Elementos após remoção do 5: " << endl;

  for (auto x : conjunto)
    cout << x << endl;

  // Função find verifica se um elemento está presente no set, retornando um
  // ponteiro que aponto para esse elemento. Caso ele não esteja no conjunto o
  // ponteiro aponta para o fim do set, definido pela função END.
  //
  cout << "Procurando elemento 3 com find:" << endl;

  if (conjunto.find(3) != conjunto.end())
    cout << "Achei o 3! :D" << endl;

  // Begin() retorna um ponteiro para o primeiro elemento. O(1)
  // end() retorna um ponteiro que aponta para o fim do set. O(1)
  // empty(), size(), clear(), lowerbound(x) retorna um ponteiro que aponta para
  // o primeiro valor que não vem antes que x. upper_bound(x) retorna um
  // ponteiro que aponta para o primeiro valor que vem depois de x,
  //
  // No set os elementos não estão armazenados como em um vetor, eles estão numa
  // Red Black Tree. Percorrendo o set

  set<int> t;

  for (int i = 10; i >= 1; i--) {
    t.insert(i);
  }

  set<int>::iterator it;

  cout << "Printando valores presentes no set: " << endl;

  for (it = t.begin(); it != t.end(); it++)
    cout << *it << endl;

  return 0;
}
