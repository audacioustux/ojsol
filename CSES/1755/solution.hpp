#include <bits/stdc++.h>

using namespace std;

class PalindromeReorder {
public:
  static void solve(istream &cin = std::cin, ostream &cout = std::cout) {
    string s;
    cin >> s;

    unordered_map<char, int> cnt;
    for (char c : s)
      cnt[c]++;

    int odd = 0;
    char oddChar;
    for (auto [c, n] : cnt) {
      if (n % 2 == 1) {
        odd++;
        oddChar = c;
      }
    }
    cnt[oddChar]--;

    if (odd > 1 || (odd == 1 && s.size() % 2 == 0)) {
      cout << "NO SOLUTION" << endl;
      return;
    }

    string firstHalf, secondHalf;
    for (auto [c, n] : cnt) {
      string half(n / 2, c);
      firstHalf += half;
      secondHalf = half + secondHalf;
    }

    if (odd == 1)
      cout << firstHalf << oddChar << secondHalf << endl;
    else
      cout << firstHalf << secondHalf << endl;
  }
};
