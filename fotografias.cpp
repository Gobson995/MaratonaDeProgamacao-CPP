#include <bits/stdc++.h>

using namespace std;

int main () {
  int a, b, c, d;
  cin >> a >> b;
  cin >> c >> d;

  vector<pair<int,int>> r1 = {{a,b}, {b,a}};
  vector<pair<int,int>> r2 = {{c,d}, {d,c}};

  for (auto [aa, bb] : r1) {
    for (auto [cc, dd] : r2) {
      if (bb == dd && aa + cc == bb) {
        cout << "SIM" << endl;
        return 0;
      }  
      if (aa == cc && bb + dd == aa) {
        cout << "SIM" << endl;;
        return 0;
      }
    }
  }

  cout << "NAO" << endl;
  return 0;
}