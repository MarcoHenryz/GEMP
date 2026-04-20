#include <bits/stdc++.h>

using namespace std;

bool verificar_string(string input) {

  stack<char> pilha;

  for (int i = 0; i < input.size(); i++) {

    char c = input[i];

    if (c == '(' || c == '[' || c == '{') {
      pilha.push(c);
    } else {

      if (pilha.empty())
        return false;

      char topo = pilha.top();
      pilha.pop();

      if (c == ')' && topo != '(')
        return false;
      if (c == ']' && topo != '[')
        return false;
      if (c == '}' && topo != '{')
        return false;
    }
  }

  return pilha.empty();
}

int main(int argc, char *argv[]) {

  int t;
  cin >> t;

  while (t--) {

    string input;
    cin >> input;
    cout << (verificar_string(input) ? "S" : "N") << endl;
  }

  return 0;
}
