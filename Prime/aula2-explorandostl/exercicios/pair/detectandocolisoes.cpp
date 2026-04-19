#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef pair<pii, pii> rect;

bool intercepta(rect a, rect b) {
  return !(a.second.first < b.first.first || b.second.first < a.first.first ||
           a.second.second < b.first.second ||
           b.second.second < a.first.second);
}

int main() {
  rect a, b;

  while (cin >> a.first.first >> a.first.second >> a.second.first >>
             a.second.second &&
         cin >> b.first.first >> b.first.second >> b.second.first >>
             b.second.second) {
    cout << intercepta(a, b) << "\n";
  }

  return 0;
}
