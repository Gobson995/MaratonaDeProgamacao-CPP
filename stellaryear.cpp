#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int n, x; cin >> n >> x;

  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  vector<int> resp;

  for(int i = 0; i < n; i++) {
    if (x % a[i] == 0) {
      resp.push_back(i+1);
    }
  }

  cout << resp.size() << endl;

  for (int i = 0; i < resp.size(); i++) {
    cout << resp[i] << " ";
  }

  cout << endl;
}