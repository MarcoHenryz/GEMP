#include <bits/stdc++.h>

using namespace std;

int main() {

  queue<string> q;
  string times[] = {"A", "B", "C", "D", "E", "F", "G", "H",
                    "I", "J", "K", "L", "M", "N", "O", "P"};

  for (auto t : times)
    q.push(t);

  int m, n;
  for (int i = 0; i < 15; i++) {
    cin >> m >> n;

    string esq = q.front();
    q.pop();
    string dir = q.front();
    q.pop();

    if (m > n)
      q.push(esq);
    else
      q.push(dir);
  }

  cout << q.front() << endl;
  return 0;
}
