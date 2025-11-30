#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    string num;
    cin >> num;

    int sum = (num[0] - '0') + (num[1] - '0');

    cout << sum << endl;
  }
}