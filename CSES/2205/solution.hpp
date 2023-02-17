#include <bits/stdc++.h>

using namespace std;

class GrayCode {
public:
  static void solve(istream &cin = std::cin, ostream &cout = std::cout) {
    int n;
    cin >> n;

    for (int i = 0; i < (1 << n); i++) {
      int gray = i ^ (i >> 1);
      bitset<32> b(gray);
      cout << b.to_string().substr(32 - n) << endl;
    }
  }
};
