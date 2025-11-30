#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> vec(n);

    for(int i = 0; i < n; i++) cin >> vec[i];

    sort(vec.begin(), vec.end());

    int cont = 0;

    for(int i = 1; i < n; i++) {
      int opa = vec[i] - vec[0];
      cont += opa;
    }

    cout << cont << endl;
  }
}