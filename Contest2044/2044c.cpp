#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int m, a, b, c;
    cin >> m >> a >> b >> c;

    int resp = 0;
    int ma = m, mb = m;

    if (a <= ma) {
      ma -= a;
      resp += a;
    }
    else {
      ma = 0;
      resp += m;
    }

    if (b <= mb) {
      mb -= b;
      resp += b;
    }
    else {
      mb = 0;
      resp += m;
    }

    int sobra = mb + ma;

    if (sobra) {
      if (c >= sobra) {
        resp += sobra;
      }
      else {
        resp += c;
      }
    } 
    
    cout << resp << endl;
    
    
  }
}