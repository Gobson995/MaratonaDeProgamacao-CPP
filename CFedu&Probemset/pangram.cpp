#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;

    string s; cin >> s;

    set<char> letras;

    for (char c : s) letras.insert(tolower(c));

    if (letras.size() == 26) cout << "YES";
    else cout << "NO";
    
    cout << endl;
     
}