#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    string a, b; cin >> a;
    int resp = 0;
    b = "codeforces";


    for(int i = 0; i < 10; i++) {
      if (a[i] != b[i]) resp++;
    }

    cout << resp << endl;
  }
}