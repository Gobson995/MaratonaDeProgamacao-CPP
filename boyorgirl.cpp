#include <bits/stdc++.h>

using namespace std;

int main () {
    string s; cin >> s;

    map<char, int> freq;

    for (int i = 0; i < s.size(); i++) {
        freq[s[i]]++;
    }

    int ver = freq.size();

    if (ver % 2 != 0) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";

    cout << endl;
}