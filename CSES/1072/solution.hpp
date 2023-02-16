#include <bits/stdc++.h>

using namespace std;

class TwoKnights {
public:
  static void solve(istream &cin = std::cin, ostream &cout = std::cout) {
    int n;
    cin >> n;

    for (long long i = 1; i <= n; i++) {
      long long total = i * i * (i * i - 1) / 2;
      long long attack = 2 * (i - 1) * 2 * (i - 2);
      cout << total - attack << endl;
    }
  }
};
