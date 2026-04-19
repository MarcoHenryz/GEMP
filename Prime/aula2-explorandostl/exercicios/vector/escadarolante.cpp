#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {

  int n, input;
  int tempototal = 0;
  vector<int> tempo;

  cin >> n;

  for (int i = 0; i < n; i++) {

    cin >> input;
    tempo.push_back(input);
  }

  for (int i = 0; i < n; i++) {

    if (i == n - 1) {

      tempototal += 10;
      break;
    }

    if (tempo[i + 1] - tempo[i] < 10) {

      tempototal += tempo[i + 1] - tempo[i];
    } else {

      tempototal += 10;
    }
  }

  cout << tempototal << endl;

  return 0;
}
