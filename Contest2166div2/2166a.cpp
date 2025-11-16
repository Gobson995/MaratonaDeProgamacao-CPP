#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;
    string a; cin >> a;

    map<char,int> opa;
    int target = a[n-1];

    for(int i = 0; i < n-1; i++) {
      opa[a[i]]++;
    }

    int resp = (n-1) - opa[target];
    

    cout << resp << endl;
  }
}