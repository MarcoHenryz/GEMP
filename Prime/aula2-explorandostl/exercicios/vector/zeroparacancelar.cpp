#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {

  int n, input;
  vector<int> numeros;
  int total = 0;

  cin >> n;
  for (int i = 0; i < n; i++) {

    cin >> input;

    if (input == 0 && numeros.size() > 0) {
      numeros.pop_back();
    } else {
      numeros.push_back(input);
    }
  }

  for (int i = 0; i < numeros.size(); i++)
    total += numeros[i];

  cout << total << endl;

  return 0;
}
