#include <bits/stdc++.h>

using namespace std;

int main () {
    string a;
    getline(cin, a);

    map<char,int>freq;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            freq[a[i]]++;
        }
    }

    cout << freq.size() << endl;
}