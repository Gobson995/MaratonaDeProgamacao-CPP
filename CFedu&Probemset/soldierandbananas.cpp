#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
    int k, n, w;
    cin >> k >> n >> w;

    int total = k * (w * (w + 1) / 2);

    int opa = total - n;

    if (opa < 0) opa = 0;

    cout << opa << endl;
}