#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {

  int n, k;
  string input;
  cin >> n;
  cin >> k;

  set<string> nomes;

  for (int i = 0; i < n; i++) {

    cin >> input;
    nomes.insert(input);
  }

  auto it = nomes.begin();
  advance(it, k - 1); // avança k posições o iterador do set
  cout << *it << endl;
  // auto it = next(nomes.begin(), k)
  //

  return 0;
}
