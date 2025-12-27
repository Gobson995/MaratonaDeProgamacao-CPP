#include <bits/stdc++.h>

using namespace std;

int main () {
  int n, s; cin >> n >> s;

  vector<int> a(n);

  int resp = 0, conta = 0, l = 0;

  for (int i = 0; i < n; i++) cin >> a[i];

  for (int r = 0; r < n; r++) {
   conta += a[r];

   while (conta > s) {
    conta -= a[l];
    l++;
   }

   resp = max(resp, r - l + 1);
  }

  cout << resp << endl;
}