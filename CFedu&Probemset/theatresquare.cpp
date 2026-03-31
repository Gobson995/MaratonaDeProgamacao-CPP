#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
    int n, m, a; cin >> n >> m >> a;

    int x = (n + a - 1) / a;
    int y = (m + a - 1) / a;

    cout << x * y << endl;
}