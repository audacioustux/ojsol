#include <bits/stdc++.h>

using namespace std;

class IncreasingArray {
public:
  static void solve(istream &cin = std::cin, ostream &cout = std::cout) {
    long long int n;
    cin >> n;

    vector<int> nums = vector<int>(n);

    for (auto &num : nums) {
      cin >> num;
    }

    long long int moves = 0;

    for (auto i = 1; i < n; i++) {
      if (nums[i] < nums[i - 1]) {
        moves += nums[i - 1] - nums[i];
        nums[i] = nums[i - 1];
      }
    }

    cout << moves << endl;
  }
};
