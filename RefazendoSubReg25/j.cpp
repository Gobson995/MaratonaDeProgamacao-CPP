#include <bits/stdc++.h>

using namespace std;

int main () {
  vector<int> vec(10);
  int cont1 = 0,cont2 = 0,cont3 = 0,cont4 = 0;

  for (int i = 0; i < 10; i++) {
    cin >> vec[i];
    if (vec[i] == 1) cont1++;
    else if (vec[i] == 2) cont2++;
    else if (vec[i] == 3) cont3++;
    else cont4++;
  }

  int resp = 0;

  if (cont1 == 0) resp++;
  if (cont2 == 0) resp++;
  if (cont3 == 0) resp++;
  if (cont4 == 0) resp++;

  cout << resp << endl;
}