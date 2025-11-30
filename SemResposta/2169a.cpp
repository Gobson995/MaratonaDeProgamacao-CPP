#include <bits/stdc++.h>
#define int long long
using namespace std;

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
      int m = (x + a) / 2;

      if (x < a) {
        eventos.push_back({LLONG_MIN/4, +1});
        eventos.push_back({m, -1});
      } 
      else if (x > a) {
        eventos.push_back({m+1, +1});
        eventos.push_back({LLONG_MAX/4, -1});
      }
    }

    sort(eventos.begin(), eventos.end());

    int atual = 0;
    int melhor = -1;
    int resp = a;

    for (auto e : eventos) {
      atual += e.second;
      if (atual > melhor) {
          melhor = atual;
          resp = e.first;
      }
    }

    cout << resp << endl;
  }
}