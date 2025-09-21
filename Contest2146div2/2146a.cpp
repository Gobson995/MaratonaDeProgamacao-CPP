#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    vector<int> a(n);
    map<int, int> freq;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      freq[a[i]]++;
    }

    vector<int>freqs;
    for (auto p : freq) {
      freqs.emplace_back(p.second);
    }

    if (freqs.size() == 1) {
      cout << n << endl;
    }
    else {
    int resp = 0;
    for (int i = 0; i < n; i++) { 
      int cont = 0;
      for (int j : freqs) {
        if (j >= i) {
          cont++;
        }
      }
      resp = max(resp, cont * i);
    }

  cout << resp << endl;
  }


  }
}