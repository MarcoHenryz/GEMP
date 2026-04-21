#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {

  long long n, input;
  cin >> n;

  set<long long> numeros_proibidos;

  for (int i = 0; i < n; i++) {

    cin >> input;
    numeros_proibidos.insert(input);
  }

  while (cin >> input) {

    if (numeros_proibidos.find(input) != numeros_proibidos.end()) {

      cout << "sim" << endl;
    } else {
      cout << "nao" << endl;
    }
  }

  return 0;
}
