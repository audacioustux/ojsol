#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  Solution(istream &cin = std::cin, ostream &cout = std::cout) {
    long long n;
    cin >> n;

    while (n != 1) {
      cout << n << " ";
      if (n % 2 == 0)
        n /= 2;
      else
        n = n * 3 + 1;
    }

    cout << n << endl;
  }
};
