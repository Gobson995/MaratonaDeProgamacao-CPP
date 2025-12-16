#include <bits/stdc++.h>

using namespace std;

int main () {

  const int MAXN = 200000;

  vector<int> dp(MAXN + 1, 0);
  vector<long long> opa(MAXN+1, 0);

  for (int i = 1; i <= MAXN; i++) {
    dp[i] = dp[i /10] + (i % 10);
    opa[i] = opa[i - 1] + dp[i];
  }


  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    cout << opa[n] << endl;
  }
}