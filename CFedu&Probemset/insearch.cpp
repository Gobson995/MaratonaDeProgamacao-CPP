#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;

    bool resp = false;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        if (x == 1) resp = true;
    }

    if (resp) cout << "HARD\n";
    else cout << "EASY\n";
}