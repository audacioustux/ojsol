#include <bits/stdc++.h>

using namespace std;

class Repititions {
public:
  static void solve(istream &cin = std::cin, ostream &cout = std::cout) {
    string s;
    cin >> s;

    int max = 1;
    int current = 1;

    for (size_t i = 1; i < s.length(); i++) {
      if (s[i] == s[i - 1]) {
        current++;
      } else {
        current = 1;
      }

      if (current > max) {
        max = current;
      }
    }

    cout << max << endl;
  }
};
