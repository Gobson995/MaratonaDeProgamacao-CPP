#include <bits/stdc++.h>

using namespace std;

int main () {
  string a; cin >> a;

  int contmi = 0, contma = 0;

  for (int i = 0; i < a.size(); i++) {
    if (a[i] < 91) contma++;
    else contmi++;
  }

  if (contma > contmi) {
    for (int i = 0; i < a.size(); i++) {
      a[i] = toupper(a[i]);
    }
  }
  else {
    for (int i = 0; i < a.size(); i++) {
      a[i] = tolower(a[i]);
    }
  }

  cout << a << endl;
}