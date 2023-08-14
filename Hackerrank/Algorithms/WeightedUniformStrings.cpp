#include <bits/stdc++.h>

using namespace std;

class WeightedUniformStrings
{
public:
    static void solve(istream &cin = std::cin, ostream &cout = std::cout)
    {
        string s;
        cin >> s;

        unordered_set<int> weights;
        int weight = 0;
        char prev = '\0';

        for (char c : s)
        {
            if (c != prev)
                weight = 0;
            weight += c - 'a' + 1;
            weights.insert(weight);
            prev = c;
        }

        int n;
        cin >> n;

        while (n--)
        {
            int x;
            cin >> x;
            if (weights.find(x) != weights.end())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    WeightedUniformStrings::solve();
    return 0;
}
