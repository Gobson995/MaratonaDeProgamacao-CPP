#include <bits/stdc++.h>
using namespace std;

int main() {
  int tc; 
  cin >> tc;

  while (tc--) {
    int n;
    cin >> n;

    int bestX = 2;
    long long bestSum = 0;

    for (int x = 2; x <= n; x++) {
      long long sum = 0;
      for (int k = 1; k * x <= n; k++) {
        sum += k * x;
      }
      if (sum > bestSum) {
        bestSum = sum;
        bestX = x;
      }
    }

    cout << bestX << endl;
  }
}
