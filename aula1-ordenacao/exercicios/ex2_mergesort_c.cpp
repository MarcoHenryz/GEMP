/*
Exercicio no quadro:
*/

#include <bits/stdc++.h>

#define MAXN 1100

int n;

int vetor[MAXN], aux[MAXN];

void merge_sort(int ini, int fim) {

  if (ini == fim)
    return;

  // EXERCÌCIO: desenhar árvore de recusão resultante do processo de execução de
  // um vetor

  merge_sort(ini, (ini + fim) / 2);     // ordeno as duas metades com recursão
  merge_sort((ini + fim) / 2 + 1, fim); // ordena a outra metade com recursão

  int tam = 0;                 // variável tam, tamanho do vetor que será criado
  int j = (ini + fim) / 2 + 1; // j, o índice do segundo vetor

  for (int i = ini; i <= (ini + fim) / 2;
       i++) { // para cada elemento do primeiro intervalo

    while (j <= fim &&
           vetor[j] <
               vetor[i]) { // enquanto o primeiro elemento nã usado do segundo
                           // intervalo for menor que o do primeiro

      aux[tam] = vetor[j]; // coloco o próximo elemento do segundo intervalo
      tam++;               // atualizo o indice de eaux
      j++;                 // passo para o próximo elemento
    }

    aux[tam] = vetor[i]; // insiro nele o pŕoximo elemento do primeiro intervalo
    tam++;               // e aumenta o tamanho do vetor
  }

  while (j <= fim) { // caso tenha sobrado no segundo vetor adiciono no final

    aux[tam] = vetor[j];
    j++;
    tam++;
  }

  // por fim, coloco os valores do vetor aux no intervalo que queria ordenar
  for (int i = ini; i <= fim; i++)
    vetor[i] = aux[i - ini];
}

int main() {

  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
    scanf("%d", &vetor[i]);

  merge_sort(1, n);

  for (int i = 1; i <= n; i++) {
    printf("%d ", vetor[i]);
  }

  printf("\n");

  return 0;
}
