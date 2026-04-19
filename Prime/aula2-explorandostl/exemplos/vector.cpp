#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {

  vector<int> v1;
  vector<double> v2;

  // Inserindo elementos

  v1.push_back(1);
  v1.push_back(3);
  v1.push_back(5);
  v1.push_back(7);

  // Acessando elementos

  for (int i = 0; i < v1.size(); i++)
    cout << v1[i] << endl;

  v1.pop_back(); // complexidade 0(1)

  v1.push_back(3);
  v1.push_back(8);

  // erase remove os elemnentos de uma determinada posição ou intervalo

  v1.erase(v1.begin() + 3);
  v1.erase(v1.begin() + 1, v1.begin() + 3);

  for (int i = 0; i < v1.size(); i++)
    cout << v1[i] << endl;

  // clear remove todos os elementos do vetor

  v1.clear();

  // resize(n) troca o tamanho do vetor para n e pode ou não inserir um
  // determinada número nas novas posições

  for (int i = 0; i < 5; i++)
    v1.push_back(i);

  v1.resize(8);

  cout << "Tamanho: " << v1.size() << endl;
  for (int i = 0; i < v1.size(); i++)
    cout << v1[i] << " ";

  cout << endl;

  v1.resize(12,
            -1); // muda o tamanho de v para 12 e insere -1 nas novas posicoes

  for (int i = 0; i < v1.size(); i++)
    cout << v1[i] << " ";

  cout << endl;

  // para ordenar um vetor usando sort podemos

  cout << "Ordenando: " << endl;
  sort(v1.begin(), v1.end());
  for (int i = 0; i < v1.size(); i++)
    cout << v1[i] << " ";

  cout << endl;

  for (int i = 0; i < v1.size(); i++)
    cout << v1[i] << " ";

  cout << endl;

  return 0;
}
