#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t;
  cin >> n >> t;

  map<int, string> jogadores;
  for (int i = 0; i < n; i++) {
    string nome;
    int nota;
    cin >> nome >> nota;
    jogadores.insert({nota, nome});
  }

  vector<set<string>> times(t);

  int i = 0;
  for (auto it = jogadores.end(); it != jogadores.begin();) {
    --it;
    if (i == t)
      i = 0;
    times[i].insert(it->second);
    i++;
  }

  for (int i = 0; i < t; i++) {
    cout << "Time " << i + 1 << "\n";
    for (const auto &nome : times[i]) {
      cout << nome << "\n";
    }
    cout << "\n";
  }

  return 0;
}
