#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    vector<int> multi;

    for(int i = 2 ; i * i <= n; i++) {
     if (n % i == 0) {
      multi.push_back(i);
      if (i != n / i) multi.push_back(n / i);
     } 
    }

    bool opa = false;

    for (int i = 0; i < multi.size() && !opa; i++) {
      for (int j = i+1; j < multi.size() && !opa; j++) {
        int a = multi[i];
        int b = multi[j];

        if (n % (a * b) != 0) continue;

        int c = n / (a*b);

        if (c >= 2 && c != a && c != b) {
          cout << "YES" << endl;
          cout << a << " " << b << " " << c << endl;
          opa = true;
        }
      }
    }

    if (!opa) {
      cout << "NO" << endl;
    }
  } 
}