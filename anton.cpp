#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;

    int resp = 0;

    while (n--) {
        string s; cin >> s;

        if(s[0] == 'T') resp += 4;
        else if (s[0] == 'C') resp += 6;
        else if (s[0] == 'O') resp += 8;
        else if (s[0] == 'D') resp += 12;
        else resp += 20;
    }

    cout << resp << endl;
}