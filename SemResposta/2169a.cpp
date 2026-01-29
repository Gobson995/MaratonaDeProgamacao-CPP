#include <bits/stdc++.h>
#define int long long
using namespace std;

const int INF = 2000000000;

signed main() {
  int tc; 
  cin >> tc;

  while (tc--) {
    int n, a;
    cin >> n >> a;

    vector<int> opa(n);
    for (int i = 0; i < n; i++) cin >> opa[i];

    vector<pair<int,int>> eventos;

    for (int x : opa) {
      if (x < a) {
        int m = (x + a) / 2 + 1;
        eventos.push_back({m,+1});
        eventos.push_back({INF + 1, -1});
      } 
      else if (x > a) {
        int r = (x + a - 1) / 2;
        eventos.push_back({0, +1});
        eventos.push_back({r + 1, -1});
      }
    }

    sort(eventos.begin(), eventos.end());

    int atual = 0;
    int melhor = -1;
    int resp = 0;

    for (auto [pos, delta] : eventos) {
      atual += delta;
      if (atual > melhor && pos <= INF) {
          melhor = atual;
          resp = pos;
      }
    }

    cout << resp << endl;
  }
}