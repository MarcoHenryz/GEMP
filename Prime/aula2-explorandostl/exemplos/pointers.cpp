#include <bits/stdc++.h>
#include <ostream>

using namespace std;

void modifica(int y) { y = y + 3; }

void modifica_de_verdade(int *y) { *y = *y + 3; }

int *cria_ponteiro() {
  int z = 45;

  return &z;
}

int main(int argc, char *argv[]) {

  int x = 42; // int tamanho 4 bytes, 32 bits

  cout << x << endl;

  int *p = &x;

  cout << (*p) << endl;

  *p = 27;

  cout << (*p) << endl;

  int y = 5;
  cout << y << endl;
  modifica(y); // função cria uma copia
  cout << y << endl;

  int *p2 = &y;
  cout << *p2 << endl;
  modifica_de_verdade(p2); // cria uma copia do ponteiro, mas a copia do
                           // ponteiro continua apontando para a mesma variavel
  cout << *p2 << endl;

  modifica_de_verdade(&x);
  cout << x << endl;

  /// Aplicanto em vetores

  int vet[5] = {10, 25, 3, 4, 1};

  int *p3 = &vet[0];
  int *p4 = vet;

  cout << "Vetores" << endl;

  cout << *p3 << endl;

  cout << p3 << endl;

  p3 = p3 + 1;

  cout << p3 << endl;

  cout << *p3 << endl;

  p3 += 2;

  cout << *p3 << endl;

  cout << *vet << endl;

  sort(vet, vet + 5);

  sort(&vet[0], (&vet[0]) + 5);

  /// Criando ponteiros sem necessariamente ter uma variável ligada a ele.
  ///
  cout << "Criando ponteiros" << endl;

  int *p5 = new int;
  *p5 = 45;

  cout << *p5 << endl;

  int *p6 = new int(27);

  cout << *p6 << endl;

  int *vet2 = new int[10];

  // criando dessa maneira as variáveis não são apagadas da memória quando a
  // função termina, para liberar precisamos do delete
  //
  delete p5;
  delete p6;
  delete[] vet2;

  // quando o programa termina, a memória das variáveis criadas com o new são
  // deletadas automaticamente, então nem sempre é um problema esquecer de
  // liberar a memória. Mas se você cria várias variáveis usando o new e não usa
  // o delete é criado um lixo de memória. Caso essa memória fique muito grande
  // ele pode ocupar toda a memória do programa e causar Runtime Error.
  //
  //

  // Estruturas dinâmicas são a principal aplicação de um ponteiro em
  // programação competitiva, usando eles é possível criar estruturas de dados
  // que mudam de tamanho utilizando as funções new e delete. Como o vector e
  // set

  return 0;
}
