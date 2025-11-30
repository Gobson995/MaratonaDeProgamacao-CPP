#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int tc; cin >> tc;

  while(tc--) {
    int n;
    cin >> n;

    int a;
    int cont1 = 0;
    int cont0= 0;


    for (int i = 0; i < n; i++) {
      cin >> a;

      if (a == -1) {
        cont1++;
      }
      else if (a == 0){
        cont0++;
      }
    }

    int resp = 0;
    if (cont1 % 2 != 0) {
      resp += 2;
    }

    resp += cont0;
    
    cout << resp << endl;
  }
}