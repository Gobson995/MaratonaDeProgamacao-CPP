#include <bits/stdc++.h>

using namespace std;

int main () {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> a(n), b(n);
        map<int, int> teste;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
            teste[a[i]]++;
        }

        sort(b.begin(), b.end());

        bool opa = false;

        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                opa = true;
                break;
            }
        }


        if (a.size() == 1) cout << 1 << endl;
        else if(opa) cout << 1 << endl;
        else cout << a.size() << endl;
    }
}