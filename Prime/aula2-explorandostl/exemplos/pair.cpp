#include <bits/stdc++.h>
#include <ios>

using namespace std;

// Pair é como se fosse uma struct simplificada que possui diversas funções pré
// implementadas.

int main(int argc, char *argv[]) {

  pair<int, int> p1;
  pair<int, string> p2;

  // Bastante comum utilizarmos ele como um vetor de pares

  vector<pair<int, int>> v = {{10, 1}, {1, 3}, {1, 2}, {2, 4}, {3, 5}};

  v.push_back({7, 8});

  cout << v[0].first << " " << v[0].second << endl;
  cout << endl;

  // É possível combinar pairs também

  vector<pair<pair<int, string>, int>> v2;

  v2.push_back({{1, "MARCO"}, 8});
  v2.push_back({{2, "ANA"}, 7});
  v2.push_back({{3, "PERES"}, 10});

  for (int i = 0; i < (int)v2.size(); i++) {

    cout << "Numero: " << v2[i].first.first << " "
         << "Nome: " << v2[i].first.second << " "
         << "Nota: " << v2[i].second << endl;
  }

  cout << endl;

  // Comparacao de pairs, primeiro comparamos o primeiro elemento, depois o
  // segundo elemento
  //
  pair<int, string> A = {10, "Thiago"};
  pair<int, string> B = {20, "Lawrence"};
  pair<int, string> C = {20, "Davi"};

  cout << boolalpha << (A < B) << endl;
  cout << boolalpha << (C < B) << endl;
  cout << boolalpha << (B < C) << endl;
  cout << endl;

  // Por permitir comparacoes, é possivel ordenar um vetor de pair sem um
  // comparador, pois este já está implementado
  //

  sort(v.begin(), v.end());

  for (int i = 0; i < v.size(); i++)
    cout << v[i].first << " " << v[i].second << endl;

  return 0;
}
