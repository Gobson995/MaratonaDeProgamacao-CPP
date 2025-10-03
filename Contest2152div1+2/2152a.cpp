#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        set<int> s;
        for (int i = 0; i < n; ++i) {
          int opa; 
          cin >> opa;
          s.insert(opa);
        }
        int k = s.size();
        int resp = (2*k) - 1;
        cout << resp << endl;
    }
}