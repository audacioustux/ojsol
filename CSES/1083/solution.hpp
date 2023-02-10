#include <bits/stdc++.h>

using namespace std;

class MissingNumber {
public:
  static void solve(istream &cin = std::cin, ostream &cout = std::cout) {
    long long int n;
    cin >> n;

    vector<int> nums = vector<int>(n - 1);

    for (auto &num : nums) {
      cin >> num;
    }

    sort(nums.begin(), nums.end());

    for (auto i = 0; i < n; i++) {
      if (nums[i] != i + 1) {
        cout << i + 1 << endl;
        break;
      }
    }
  }
};
