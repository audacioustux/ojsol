#include <bits/stdc++.h>

using namespace std;

class B {
public:
  static void solve(istream &cin = std::cin, ostream &cout = std::cout) {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
      int a, b, c;
      cin >> a >> b >> c;

      if (b * c <= a) {
        cout << "Case " << i << ": Yes" << endl;
      } else {
        cout << "Case " << i << ": No" << endl;
      }

      i++;
    }
  }
};
