#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    vector<int> sun(2), sla(2);
  

    for(int i = 0; i < 2; i++) cin >> sun[i];
    for(int i = 0; i < 2; i++) cin >> sla[i];

    int resp = 0;

    int s1 = 0, s2 = 0;
    if (sun[0] > sla[0]) s1++;
    else if (sun[0] < sla[0]) s2++;
    if (sun[1] > sla[1]) s1++;
    else if (sun[1] < sla[1]) s2++;
    if (s1 > s2) resp++;

    s1 = s2 = 0;
    if (sun[0] > sla[1]) s1++;
    else if (sun[0] < sla[1]) s2++;
    if (sun[1] > sla[0]) s1++;
    else if (sun[1] < sla[0]) s2++;
    if (s1 > s2) resp++;

    s1 = s2 = 0;
    if (sun[1] > sla[0]) s1++;
    else if (sun[1] < sla[0]) s2++;
    if (sun[0] > sla[1]) s1++;
    else if (sun[0] < sla[1]) s2++;
    if (s1 > s2) resp++;

    s1 = s2 = 0;
    if (sun[1] > sla[1]) s1++;
    else if (sun[1] < sla[1]) s2++;
    if (sun[0] > sla[0]) s1++;
    else if (sun[0] < sla[0]) s2++;
    if (s1 > s2) resp++;

    cout << resp << endl;
  }
}