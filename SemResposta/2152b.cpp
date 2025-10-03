#include <bits/stdc++.h>
#define ll long long;
using namespace std;


signed main() {
  int tc; cin >> tc;
  while (tc--) {
    int n, lk, ck, ld, cd;
    cin >> n >> lk >> ck >> ld >> cd;

    int resp;
    if (n <= 2) {
      cout << 1 << endl;
    }
    else {
    if (lk != ld && ck != cd) {
      int diag, diag2, vertx;
      diag = lk;
      diag2 = n - lk;
      if (diag < diag2) {
        vertx = diag;
      }
      else {
        vertx = diag2 + 1;
      }
      int d, d2, verty;
      d = ck;
      d2 = n - ck;
      if (d < d2) {
        verty = d;
      }
      else {
        verty = d2 + 1;
      }

      int cont = 0;

      cont += abs(ld - vertx);
      cont += abs(cd - verty);

      cont++;
      cont /= 2;

      resp = cont;

      
    }
    else if (lk == ld) {
      int lugar, lugar2;
      lugar = ld;
      lugar2 = n - ld;
      if (lugar > lugar2) {
        resp = lugar + 1;
      }
      else resp = lugar2 + 1;
    }
    else {
      int lugar, lugar2;
      lugar = lk;
      lugar2 = n - lk;
      if (lugar > lugar2) {
        resp = lugar + 1;
      }
      else resp = lugar2 + 1;
    }


    cout << resp << endl;
    }
    }
  }
