#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int n, k; cin >> n >> k;


    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];
      

    vector<int> freq(n + 1, 0);
    for (int i : a) freq[i]++;

    
    int opa = 0;

    for (int i = 0; i < k; i++) {
        if (freq[i] == 0) opa++;
    }

    int resp;
    if (k == n) {
        resp = opa;  
    } else {
        resp = max(opa, freq[k]);
    }

    cout << resp << endl;  
  }
}
