#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {

  int n, m;
  int input;
  vector<int> identificadores;
  vector<int> sairam;

  cin >> n;

  for (int i = 0; i < n; i++) {

    cin >> input;
    identificadores.push_back(input);
  }

  cin >> m;

  for (int i = 0; i < m; i++) {

    cin >> input;
    sairam.push_back(input);
  }

  while (sairam.size() > 0) {

    int i = sairam[0];
    identificadores.erase(
        find(identificadores.begin(), identificadores.end(), i));

    sairam.erase(sairam.begin());
  }

  for (int i = 0; i < identificadores.size(); i++) {

    if (i == identificadores.size() - 1)
      cout << identificadores[i];
    else
      cout << identificadores[i] << " ";
  }

  cout << endl;

  return 0;
}
