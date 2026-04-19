#include <bits/stdc++.h>

using namespace std;

int main() {
  int p, s;
  cin >> p >> s;

  vector<pair<int, int>> intervalos;
  for (int i = 0; i < s; i++) {
    pair<int, int> input;
    cin >> input.first >> input.second;
    if (input.first > input.second)
      swap(input.first, input.second);
    intervalos.push_back(input);
  }

  if (s == 0) {
    cout << endl;
    return 0;
  }

  sort(intervalos.begin(), intervalos.end());

  int ini = intervalos[0].first;
  int fim = intervalos[0].second;

  for (int i = 1; i < s; i++) {
    if (intervalos[i].first > fim) {
      cout << ini << " " << fim << endl;
      ini = intervalos[i].first;
      fim = intervalos[i].second;
    } else {
      fim = max(fim, intervalos[i].second);
    }
  }
  cout << ini << " " << fim << endl;

  cout << endl;
  return 0;
}
