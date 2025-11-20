#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    vector<int> a(n), opa;

    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }

    if (a[0] == -1 && a[n-1] == -1) {
      a[0] = a[n-1] = 0;
    } 
    else if (a[0] == -1) {
      a[0] = a[n-1];
    } 
    else if (a[n-1] == -1) {
      a[n-1] = a[0];
    }

    for(int i = 0; i < n; i++) {
      if (a[i] == -1) a[i] = 0;
    }

    for(int i = 0; i < n-1; i ++) {
      int conta = a[i+1] - a[i];
      opa.push_back(conta);
    }

    int resp = 0;

    for(int i = 0; i < n-1; i++) {
      resp += opa[i];
    }

    cout << abs(resp) << endl;

    for(int i = 0; i < n; i++) {
      if (i == n-1) cout << a[i] << endl;
      else cout << a[i] << " ";
    }
    
    

    
    

  }
}
