#include <bits/stdc++.h>
#define int long long

using namespace std;

string binario (int ver) {
  string bin = "";
  if (ver == 0) bin = "0";
  else {
    while (ver > 0) {
      bin += (ver % 2) + '0';
      ver /= 2;
    } 
  }
  return bin;
}

signed main () {
  int tc; cin >> tc;

  while (tc--) {
    vector<int> a(3);
    for (int i = 0; i < 3; i++) cin >> a[i];

    bool resp = true;

    vector<string> opa(3);

    for (int i = 0; i < 3; i++) {
      opa[i] = binario(a[i]);
    }

    int tamanho = max((int)opa[0].size(),(int)opa[1].size());
    tamanho = max(tamanho, (int)opa[2].size());

    for (int i = 0; i < 3; i++) {
      if ((int)opa[i].size() < tamanho) {
        while ((int)opa[i].size() < tamanho) {
          opa[i].push_back('0');
        }
      }
    }

    reverse(opa[0].begin(), opa[0].end());
    reverse(opa[1].begin(), opa[1].end());
    reverse(opa[2].begin(), opa[2].end());

    for(int i = 0; i < tamanho; i++) {
      if ((opa[0][i] - '0')  + (opa[1][i] - '0') + (opa[2][i] - '0') == 2) {
        resp = false;
        break;
      }
    }

    if (resp) cout << "YES" << endl;
    else cout << "NO"<< endl;


    


    
    
  }
}