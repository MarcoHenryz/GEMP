#include <bits/stdc++.h>

using namespace std;

bool verifica_entrada(vector<string> input) {

  stack<char> pilha;

  for (int i = 0; i < input.size(); i++) {

    string st = input[i];

    for (int i = 0; i < st.size(); i++) {

      char c = st[i];

      if (c == '{') {
        pilha.push(c);
      } else {

        if (c == '}') {

          if (pilha.empty())
            return false;
          pilha.pop();
        }
      }
    }
  }

  return pilha.empty();
}

/*
cin Não le espaços nem linhas em branco, para isso use getline(cin, input)
*/

int main(int argc, char *argv[]) {

  int n;
  string input;
  cin >> n;
  cin.ignore(); // limpa o buffer
  vector<string> linhas;

  for (int i = 0; i < n; i++) {
    getline(cin, input);
    linhas.push_back(input);
  }

  cout << (verifica_entrada(linhas) ? "S" : "N") << endl;

  return 0;
}
