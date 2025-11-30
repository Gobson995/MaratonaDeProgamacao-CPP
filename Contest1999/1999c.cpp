#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n, s, m;
    cin >> n >> s >> m;

    vector<int> task(n*2);

    for (int i = 0; i < (n*2); i++) cin >> task[i];

    bool opa = false;

    if (task[0] >= s) opa = true;
    else if (m - task[(n*2)-1] >= s) opa = true;
    else {
      for (int i = 1; i < (n*2); i++) {
        if (i % 2 == 0) {
          if ((task[i] - task[i-1]) >= s) opa = true;
        }
      }
    }

    if (opa) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}