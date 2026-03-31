#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
    vector<int> a(4);

    for (int i = 1; i < 5; i++) cin >> a[i];

    string s; cin >> s;

    int total = 0;

    for (char c : s) {
        int opa = c - '0';
        total += a[opa];
    }

    cout << total << endl;
}

