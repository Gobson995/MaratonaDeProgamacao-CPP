#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    string a; cin >> a;

    int p = a[0] - '0';
    int s = a[1] - '0';

    char m1 = a[3];
    char m2 = a[4];

    int h = 0;
    h += (10*p) + s;


    string opa;

    if (h < 12) opa = "AM";
    else opa = "PM";

    if (h == 0) h = 12;
    else if (h > 12) h -= 12;

    if (h < 10) cout << "0";
    
    cout << h << ":" << m1 << m2 << " " << opa << endl;
  }
}
