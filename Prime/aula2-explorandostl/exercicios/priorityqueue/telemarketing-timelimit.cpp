#include <bits/stdc++.h>
using namespace std;

int main() {

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N, L;
  scanf("%d %d", &N, &L);

  // min-heap: (tempo_livre, id)
  // greater<> garante menor tempo no topo; em empate, menor id vem primeiro
  priority_queue<pair<int, int>, vector<pair<int, int>>,
                 greater<pair<int, int>>>
      pq;

  vector<int> ligacoes(N + 1, 0);

  for (int i = 1; i <= N; i++)
    pq.push({0, i});

  for (int i = 0; i < L; i++) {
    int T;
    scanf("%d", &T);

    auto [tempo, id] = pq.top();
    pq.pop();

    ligacoes[id]++;
    pq.push({tempo + T, id});
  }

  for (int i = 1; i <= N; i++)
    printf("%d %d\n", i, ligacoes[i]);

  return 0;
}
