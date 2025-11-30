#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    vector<pair<int,int>> coord(n);
    map<int,int> contx,conty;

    for(int i = 0; i < n; i++) {
      cin >> coord[i].first >> coord[i].second;
      contx[coord[i].first]++;
      conty[coord[i].second]++;
    }

    long long resp = 0;

    for (auto [x,y] : coord) {
      if (y == 0) 
      resp += 1LL * (contx[x] - 1) * (conty[y] - 1);
    }

    cout << resp << endl;
  }
}