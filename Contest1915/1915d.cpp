#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;
    string w; cin >> w;

    string teste = w;

    for (int i = 0; i < n; i++) {
      if(teste[i] == 'a' || teste[i] == 'e') {
        teste[i] =  'V';
      }
      else {
        teste[i] = 'C';
      }
    }

    vector<char> resp;

    for (int i = n-1; i >= 0; i--) {
      if (teste[i] == 'C' && teste[i-1] == 'V' && teste[i-2] == 'C') {
        resp.emplace_back(w[i]);
        resp.emplace_back(w[i-1]);
        resp.emplace_back(w[i-2]);
        resp.emplace_back('.');
        i -= 2;
      }
      else if (teste[i] == 'V' && teste[i-1] == 'C') {
        resp.emplace_back(w[i]);
        resp.emplace_back(w[i-1]);
        resp.emplace_back('.');
        i--;
      }
      
    }
    
    if (resp[resp.size() - 1] == '.') {
      resp.pop_back();
    }

    reverse(resp.begin(),resp.end());

    for (int i = 0; i < resp.size(); i++) {
      cout << resp[i];
    }
    cout << endl;
  }
}
