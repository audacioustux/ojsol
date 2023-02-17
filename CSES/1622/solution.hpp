#include <bits/stdc++.h>

using namespace std;

class CreatingStrings {
  istream &cin;
  ostream &cout;

public:
  CreatingStrings(istream &cin = std::cin, ostream &cout = std::cout)
      : cin(cin), cout(cout) {}

  void solve() {
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    set<string> ans;
    do {
      ans.insert(s);
    } while (next_permutation(s.begin(), s.end()));

    cout << ans.size() << endl;
    for (auto &s : ans) {
      cout << s << endl;
    }
  }
};
