#include <bits/stdc++.h>

using namespace std;

class Permutations {
public:
  static void solve(istream &cin = std::cin, ostream &cout = std::cout) {
    int n;
    cin >> n;

    if (n == 1) {
      cout << 1 << endl;
    } else if (n < 4) {
      cout << "NO SOLUTION" << endl;
    } else {
      for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
      }

      for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
      }

      cout << endl;
    }
  }
};
