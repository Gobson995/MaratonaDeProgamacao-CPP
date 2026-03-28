#include <bits/stdc++.h>

using namespace std;

int main () {
    int t; cin >> t;

    while (t--) {
        int n, a, b; cin >> n >> a >> b;

        int resp = 0;

        if ((a*2) <= b) {
            resp += (a * n);
        }
        else {
            if (n  % 2 == 0) {
                resp += b * n / 2;
            }
            else {
                n--;
                resp += b * n / 2;
                resp += a;
            }
        }

        cout << resp << endl;
    }
}
