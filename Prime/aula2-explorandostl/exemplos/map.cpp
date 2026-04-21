#include <bits/stdc++.h>
#include <map>

/*
Armazena pares representados por uma chave e um valor. Ou seja, cada chave
inserida será mapeada para um certo valor especificado.

Podemos incluir um map que recebe strings como chaves e inteiros como valores,
por exemplo associando nome a idade de pessoas.
*/

using namespace std;

int main(int argc, char *argv[]) {

  map<string, int> mapa1;
  map<int, double> mapa2;
  map<string, int>::iterator it;

  // Inserir no mapa complexidade O(log n)
  cout << "Inserindo elementos no map" << endl;

  mapa1.insert(make_pair("Ana", 5));

  mapa1["Pedro"] = 7;

  // find - procura chaves, caso não ache retorna um ponteiro para o final do
  // map. complexidade O(log n)

  cout << "Elementos do map: " << endl;

  mapa1["Lucas"] = 10;

  for (it = mapa1.begin(); it != mapa1.end(); it++) {

    cout << (*it).first << " " << (*it).second << endl;
  }

  cout << "Procurando elementos no map: " << endl;

  if (mapa1.find("Lucas") != mapa1.end()) {
    cout << mapa1["Lucas"] << endl;
  } else {
    cout << "Nao achei o Lucas" << endl;
  }

  cout << "Removendo elementos do map: " << endl;

  mapa1.erase("Lucas");

  if (mapa1.find("Lucas") != mapa1.end()) {
    cout << mapa1["Lucas"] << endl;
  } else {
    cout << "Nao achei o Lucas" << endl;
  }

  mapa1["Lucas"] = 15;
  // erase para remoção de elemento O(log n)

  // Percorrer um map
  //
  for (it = mapa1.begin(); it != mapa1.end(); it++) {

    cout << (*it).first << " " << (*it).second << endl;
  }

  return 0;
}
