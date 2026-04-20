#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {

  int n;
  cin >> n;
  int input, topo;
  int soma = 0;
  stack<int> numbers;

  while (n--) {

    cin >> input;
    if (input == 0) {
      if (numbers.empty()) {
        continue;
      }
      numbers.pop();
    } else {
      numbers.push(input);
    }
  }

  while (!numbers.empty()) {

    soma += numbers.top();
    numbers.pop();
  }

  cout << soma << endl;

  return 0;
}
