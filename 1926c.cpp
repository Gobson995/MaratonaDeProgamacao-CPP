#include <bits/stdc++.h>

using namespace std;


int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    int resp = 0;
    int temp = 0;

    for (int i = 1; i <= n; i++) {
      int a = i / 10000;    
      int b = (i / 1000) % 10;   
      int c = (i / 100) % 10;  
      int d = (i / 10) % 10;    
      int e = i % 10;          


      resp += (a + b + c + d + e);
    }

    cout << resp << endl;
  }
}