#include <bits/stdc++.h>

using namespace std;

int main () {
  vector<int> a(3);

  for(int i = 0; i < 3; i++) cin >> a[i];

  sort(a.begin(), a.end());

  int opa = a[2] - a[0];

  if (opa >= 10) {
    cout << "check again" << endl;
  }
  else {
    cout << "final " << a[1] << endl;
  }
}