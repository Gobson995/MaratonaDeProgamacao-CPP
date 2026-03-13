#include <bits/stdc++.h>

using namespace std;

int main () {
    string s; cin >> s;

    int cont = 0;

    for (char c : s) {
        if (c == '4' || c == '7') cont++;
    }

    if (cont == 4 || cont == 7) cout << "YES";
    else cout << "NO";

    cout << endl;
}