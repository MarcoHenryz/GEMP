#include <bits/stdc++.h>

using namespace std;

map<string, int> quantidade;
vector<string> universidadevetor;

void computa_entrada(int n) {

  string universidade, nome;

  for (int i = 0; i < n; i++) {
    cin >> nome;
    cin >> universidade;

    if (find(universidadevetor.begin(), universidadevetor.end(),
             universidade) == universidadevetor.end()) {

      universidadevetor.push_back(universidade);
    }

    if (quantidade.find(universidade) != quantidade.end()) {
      quantidade[universidade] += 1;
    } else {
      quantidade[universidade] = 1;
    }
  }
}

int main(int argc, char *argv[]) {

  int n;

  while (true) {

    cin >> n;
    if (n == 0) {
      break;
    } else {
      computa_entrada(n);
    }
  }

  for (int i = 0; i < universidadevetor.size(); i++) {
    cout << universidadevetor[i] << " " << quantidade[universidadevetor[i]]
         << endl;
  }

  return 0;
}
