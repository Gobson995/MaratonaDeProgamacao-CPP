#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    vector<string> a(n), b(n), c(n);
    map<string, int> freq;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      freq[a[i]]++;
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
      freq[b[i]]++;
    }
    for (int i = 0; i < n; i++) {
      cin >> c[i];
      freq[c[i]]++;
    }

    int j1 = 0, j2 = 0, j3 = 0;
    for(auto w: a) {
      if (freq[w] == 1) j1 += 3;
      else if(freq[w] == 2) j1++;
    }

    for(auto w: b) {
      if (freq[w] == 1) j2 += 3;
      else if(freq[w] == 2) j2++;
    }

    for(auto w: c) {
      if (freq[w] == 1) j3 += 3;
      else if(freq[w] == 2) j3++;
    }

    cout << j1 << " " << j2 << " " << j3 << endl;

  }
}
