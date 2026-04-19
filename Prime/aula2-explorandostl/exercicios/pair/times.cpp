#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {

  int n, t, input2;
  string input;
  vector<pair<int, string>> alunos;

  cin >> n >> t;
  vector<vector<string>> times(t);

  for (int i = 0; i < n; i++) {

    cin >> input;
    cin >> input2;
    alunos.push_back({input2, input});
  }

  sort(alunos.begin(), alunos.end());

  while (n > 0) {
    for (int i = 0; i < t; i++) {
      times[i].push_back(alunos[n - 1].second);
      alunos.pop_back();
      n--;
      if (n == 0)
        break;
    }
  }

  for (int i = 0; i < t; i++) {
    sort(times[i].begin(), times[i].end());
  }

  for (int i = 0; i < t; i++) {
    cout << "Time " << i + 1 << endl;
    for (int j = 0; j < times[i].size(); j++) {
      cout << times[i][j] << endl;
    }
    cout << endl;
  }

  return 0;
}
