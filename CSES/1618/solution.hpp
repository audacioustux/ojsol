#include <bits/stdc++.h>

using namespace std;

class TrailingZeroes {
public:
  static void solve(istream &cin = std::cin, ostream &cout = std::cout) {
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 5; i <= n; i *= 5) {
      ans += n / i;
    }
    cout << ans << endl;
  }
};
