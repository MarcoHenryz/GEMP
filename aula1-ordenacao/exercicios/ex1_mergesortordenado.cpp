#include <bits/stdc++.h>

using namespace std;

#define MAX 100100

int tam1, tam2, vetor1[MAX], vetor2[MAX], vetorzao[MAX];

void merge() {

  int tam = 0;

  int j = 0;

  for (int i = 0; i < tam1; i++) { // para cada posicao do vetor1

    while (j < tam2 &&
           vetor2[j] <=
               vetor1[i]) { // enquanto houver elemento em vetor2 e seu primeiro
                            // não usado for menor que o do vetor1

      vetorzao[tam] = vetor2[j]; // adicionar valor do vetor2 no vetorzao
      j++;                       // passo para o próximo elemento
      tam++;                     // passo para a próxima posição do vetorzao
    }
    vetorzao[tam] =
        vetor1[i]; // se sair do while, significa que vetor1 é maior ou acabou
                   // os elementos do vetor2, logo adiciono valor do vetor1
    tam++;         // passo para a proxima posição do vetorzao
  }

  while (j < tam2) {

    vetorzao[tam] = vetor2[j];
    j++;
    tam++;
  }
}

int main() {

  scanf("%d %d", &tam1, &tam2);

  for (int i = 0; i < tam1; i++)
    scanf("%d", &vetor1[i]);

  for (int i = 0; i < tam2; i++)
    scanf("%d", &vetor2[i]);

  merge();

  for (int i = 0; i < tam1 + tam2; i++)
    printf("%d ", vetorzao[i]);

  printf("\n");

  return 0;
}

// essa função tem complexidade O(n)
