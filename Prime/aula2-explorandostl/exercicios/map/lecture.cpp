#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(int argc, char *argv[]) {

  ll n, m;
  string input, input2;
  map<string, string> palavras;

  cin >> n >> m;

  for (int i = 0; i < m; i++) {

    cin >> input >> input2;
    palavras.insert(make_pair(input, input2));
  }

  for (int i = 0; i < n; i++) {

    cin >> input;
    input2 = palavras[input];

    if (input.size() <= input2.size()) {

      if (i == n - 1)
        cout << input << endl;
      else
        cout << input << " ";
    } else {
      if (i == n - 1)
        cout << input2 << endl;
      else
        cout << input2 << " ";
    }
  }

  return 0;
}
