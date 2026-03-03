#include <bits/stdc++.h>

using namespace std;

int main () {
    int a, b; cin >> a >> b;

    int m = max(a, b);
    int fav = 6 - m + 1;
    int total = 6;

    int g = __gcd(fav, total);

    fav /= g;
    total /= g;

    cout << fav << "/" << total << endl;
}