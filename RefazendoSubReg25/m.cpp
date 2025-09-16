#include <bits/stdc++.h>
#define int long long
using namespace std;

bool verifica (vector<int> vec, int mid, int n, int k) {
  vector <int> outro(n);

  for (int i = 0; i < n; i++) {
    outro[i] = vec[i];
  }

  reverse(outro.begin(), outro.end());

  int opa = -1;

  for (int i = 0; i < n; i++) {
    if (outro[i] < mid) {
      opa = i;
      break;
    }
  }

  if(opa == -1) return true;  

  while (k>0 && opa < n) {
    outro[opa] += k;
    k--;
    opa++;
  }

  int ver = LLONG_MAX;

  for (int i = 0; i < n; i++) {
    ver = min(outro[i], ver);
  }

  if (ver < mid) return true;
  else return false;
} 

signed main () {
  int n,k;
  cin >> n >> k;

  vector <int> vec(n);

  int maximo = 0, minimo = LLONG_MAX;

  for (int i = 0; i < n; i++) {
    cin >> vec[i];
    maximo = max(vec[i], maximo);
    minimo = min(vec[i], minimo);
  }

  int l = minimo;
  int r = maximo + k;

  while (l < r) {
    int mid = (l + r + 1)/2;
    bool teste = verifica (vec, mid, n, k);

    if (teste) {
      r = mid-1;
    }
    else {
      l = mid;
    }
  }
  cout << l << endl;
}