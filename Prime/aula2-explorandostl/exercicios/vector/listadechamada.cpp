#include <bits/stdc++.h>

using namespace std;

bool ordenar_por_nome(string x, string y) {

  for (int i = 0; i < x.size(); i++) {

    if (x[i] < y[i]) {
      return true;
    }
    if (x[i] > y[i]) {
      return false;
    }
  }
  return true;
}

int main(int argc, char *argv[]) {

  int n, k;
  string input;
  vector<string> nomes;

  cin >> n >> k;

  for (int i = 0; i < n; i++) {

    cin >> input;
    nomes.push_back(input);
  }

  sort(nomes.begin(), nomes.end(), ordenar_por_nome);

  cout << nomes[k - 1] << endl;

  return 0;
}
