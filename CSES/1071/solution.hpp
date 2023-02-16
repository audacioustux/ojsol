#include <bits/stdc++.h>

using namespace std;

class NumberSpiral {
public:
  static void solve(istream &cin = std::cin, ostream &cout = std::cout) {
    int t;
    cin >> t;
    while (t--) {
      long long row, col;
      cin >> row >> col;

      if (row > col) {
        if (!(row & 1))
          cout << row * row - col + 1 << endl;
        else
          cout << (row - 1) * (row - 1) + col << endl;
      } else {
        if (col & 1)
          cout << col * col - row + 1 << endl;
        else
          cout << (col - 1) * (col - 1) + row << endl;
      }
    }
  }
};
