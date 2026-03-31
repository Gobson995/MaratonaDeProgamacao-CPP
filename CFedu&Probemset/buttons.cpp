#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
    int t; cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a > b) cout << "First";
        else if (a < b) cout << "Second";
        else {
            if (c % 2 == 1) cout << "First";
            else cout << "Second";
        }

        cout << endl;
    }
}