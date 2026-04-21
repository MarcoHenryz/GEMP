#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {

  int n, input;
  cin >> n;

  set<int> conjunto;

  for (int i = 0; i < n; i++) {

    cin >> input;
    conjunto.insert(input);
  }

  cout << conjunto.size() << endl;

  return 0;
}
