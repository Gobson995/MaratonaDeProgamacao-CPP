#include <bits/stdc++.h>

using namespace std;

int main () {
    string a, b;
    cin >> a >> b;

    int resp = 0;

    for (int i = 0; i < a.size(); i++) {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);

        if (a[i] > b[i]) {
            resp = 1;
            break;
        }

        if (a[i] < b[i]) {
            resp = -1;
            break;
        }

        
    }
    cout << resp << endl;
}