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
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((ar[i] + ar[j]) % k == 0)
                {
                    count++;
                }
            }
        }
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