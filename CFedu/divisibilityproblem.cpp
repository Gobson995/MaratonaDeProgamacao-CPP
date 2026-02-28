#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
    int tc; cin >> tc;

    while(tc--) {
        int a, b;
        cin >> a >> b;

        int resto = a % b;
        int resp = (b - resto) % b;

        cout << resp << endl;
    }
}