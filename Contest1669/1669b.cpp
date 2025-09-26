#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    vector<int> a(n);
    map<int,int> freq;

    for (int i =0; i < n; i++) {
      cin >> a[i];
      freq[a[i]]++;
    }
    
    int freqs;
    int maxfreq = -1;

    for (auto[chave,valor] : freq) {
      if (valor > maxfreq) {
        maxfreq = valor;
        freqs = chave;
      }
    }

    if (maxfreq < 3) {
      cout << -1 << endl;
    }
    else {
      cout << freqs << endl;
    }
}
}