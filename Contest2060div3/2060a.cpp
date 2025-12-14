#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int a1, a2, a4, a5;

    cin >> a1 >> a2 >> a4 >> a5;

    int resp = 0;
    int cnt = 0;

    int a3 = a1 + a2;
    if (a3 == a1 + a2) cnt++;
    if (a4 == a2 + a3) cnt++;
    if (a5 == a3 + a4) cnt++;
    resp = max(resp, cnt);

    a3 = a4 - a2;
    cnt = 0;
    if (a3 == a1 + a2) cnt++;
    if (a4 == a2 + a3) cnt++;
    if (a5 == a3 + a4) cnt++;
    resp = max(resp, cnt);

    a3 = a5 - a4;
    cnt = 0;
    if (a3 == a1 + a2) cnt++;
    if (a4 == a2 + a3) cnt++;
    if (a5 == a3 + a4) cnt++;
    resp = max(resp, cnt);

    cout << resp << endl;
  }
}