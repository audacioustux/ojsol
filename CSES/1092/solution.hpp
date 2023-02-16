#include <bits/stdc++.h>

using namespace std;

class TwoSets {
public:
  static void solve(istream &cin = std::cin, ostream &cout = std::cout) {
    int n;
    cin >> n;

    if ((n % 4 == 1) || (n % 4 == 2)) {
      cout << "NO" << endl;
      return;
    }

    cout << "YES" << endl;

    set<int> set1, set2;

    if (n % 4 == 3) {
      set1.insert({1, 2});
      set2.insert({3});
    }
    if (n % 4 == 0) {
      set1.insert({1, 4});
      set2.insert({2, 3});
    }

    for (int i = n % 4 ? 4 : 5; i <= n; i += 4) {
      set1.insert({i, i + 3});
      set2.insert({i + 1, i + 2});
    }

    cout << set1.size() << endl;
    copy(set1.begin(), set1.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    cout << set2.size() << endl;
    copy(set2.begin(), set2.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
  }
};
