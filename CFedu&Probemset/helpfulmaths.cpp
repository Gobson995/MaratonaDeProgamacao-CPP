#include <bits/stdc++.h>

using namespace std;

int main () {
    string s;  cin >> s;

    vector<int> opa;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '+') {
            char c = s[i];
            int novo = c - '0';
            opa.push_back(novo);
        }
    }

    sort(opa.begin(), opa.end());

    for (int i = 0; i < opa.size() -1; i++) {
        cout << opa[i] << '+';
    }

    cout << opa[opa.size() - 1] << endl;
    
} 