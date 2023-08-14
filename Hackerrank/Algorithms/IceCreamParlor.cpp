#include <bits/stdc++.h>

using namespace std;

class IceCreamParlor
{
public:
    static void solve(istream &cin = std::cin, ostream &cout = std::cout)
    {
        int t;
        cin >> t;

        while (t--)
        {
            int m, n;
            cin >> m >> n;

            vector<int> costs(n);
            for (int &cost : costs)
                cin >> cost;

            unordered_map<int, int> costToIndex;
            for (int i = 0; i < n; ++i)
            {
                int cost = costs[i];
                int otherCost = m - cost;
                auto it = costToIndex.find(otherCost);
                if (it != costToIndex.end())
                {
                    cout << it->second + 1 << " " << i + 1 << endl;
                    break;
                }
                costToIndex[cost] = i;
            }
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    IceCreamParlor::solve();
    return 0;
}
