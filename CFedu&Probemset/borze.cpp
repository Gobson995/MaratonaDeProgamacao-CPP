#include <bits/stdc++.h>

using namespace std;

int main () {
    string s; cin >> s;

    string resp;

    for (int i = 0; i < s.size(); i++) {
        if (i + 1 == s.size()) {
            resp.push_back('0');
        }
        else if (s[i] == '.') {
            resp.push_back('0');
        }
        else if (s[i] == '-' && s[i + 1] == '.') {
            resp.push_back('1');
            i++;
        }
        else {
            resp.push_back('2');
            i++;
        }
    }

    cout << resp << endl;
}