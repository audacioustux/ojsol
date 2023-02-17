#include <bits/stdc++.h>

using namespace std;

class TowerOfHanoi {
  istream &cin;
  ostream &cout;

public:
  TowerOfHanoi(istream &cin = std::cin, ostream &cout = std::cout)
      : cin(cin), cout(cout) {}

  void move(int a, int b, int c, int n) {
    if (n == 1) {
      cout << a << " " << c << endl;
      return;
    }

    move(a, c, b, n - 1);
    cout << a << " " << c << endl;
    move(b, a, c, n - 1);
  }

  void solve() {
    int n;
    cin >> n;

    cout << (1 << n) - 1 << endl;

    move(1, 2, 3, n);
  }
};
