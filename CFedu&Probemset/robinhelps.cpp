#include <bits/stdc++.h>

using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n, k; cin >> n >> k;

    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    int tem = 0, resp = 0;

    for(int i = 0; i < n; i++) {
      if(a[i] >= k) tem += a[i];

      if(a[i] == 0 && tem != 0) {
        resp++;
        tem--;
      }
      
    }

    cout << resp << endl;
  }
}