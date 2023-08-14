#include <bits/stdc++.h>

using namespace std;

class DivisibleSumPairs
{
public:
    static void solve(istream &cin = std::cin, ostream &cout = std::cout)
    {
        int n, k;
        cin >> n >> k;

        vector<int> ar(n);
        for (int &ai : ar)
            cin >> ai;

        int count = 0;
        for (auto i = ar.begin(); i != ar.end(); ++i)
            for (auto j = i + 1; j != ar.end(); ++j)
                if ((*i + *j) % k == 0)
                    ++count;

        cout << count << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    DivisibleSumPairs::solve();
    return 0;
}