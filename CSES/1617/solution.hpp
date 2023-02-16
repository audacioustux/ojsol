#include <bits/stdc++.h>

using namespace std;

class BitStrings {
public:
  static void solve(istream &cin = std::cin, ostream &cout = std::cout) {
    int n;
    cin >> n;

    long long ans = 1;
    for (int i = 0; i < n; i++) {
      ans = (ans * 2) % 1000000007;
    }
    cout << ans << endl;
  }
};
