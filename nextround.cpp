#include <bits/stdc++.h>

using namespace std;

int main () {
  int n, k; cin >> n >> k;

  vector<int> a(n);

  int resp = 0;
  
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int opa = a[k-1];
  
  for (int i = 0; i < n; i++) {
    if (a[i] >= opa && a[i] > 0) resp++;
  }


  cout << resp << endl;
}