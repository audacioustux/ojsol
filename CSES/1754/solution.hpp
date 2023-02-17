#include <bits/stdc++.h>

using namespace std;

class CoinPiles {
public:
  static void solve(istream &cin = std::cin, ostream &cout = std::cout) {
    int t;
    cin >> t;

    while (t--) {
      int a, b;
      cin >> a >> b;

      if (a > b)
        swap(a, b);

      if (a * 2 < b || (a + b) % 3 != 0)
        cout << "NO" << endl;
      else
        cout << "YES" << endl;
    }
  }
};
