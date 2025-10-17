#include <bits/stdc++.h>

using namespace std;

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;

  while (tc--) {
    long long a, b;
    cin >> a >> b;

    if (a == b) {
        cout << 0 << endl;
    } 
    else if ((a ^ b) <= a) {
        cout << 1 << endl << (a ^ b) << endl;
    } 
    else if (true) {
        long long x1 = (a ^ b) & ((1LL << 30) - 1);
        long long a1 = a ^ x1;
        long long x2 = a1 ^ b;
        cout << 2 << endl << x1 << " " << x2 << endl;
    }
  }
}
