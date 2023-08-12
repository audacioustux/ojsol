#include <bits/stdc++.h>

using namespace std;

class SubarrayDivision
{
public:
    static void solve(istream &cin = std::cin, ostream &cout = std::cout)
    {
        int n;
        cin >> n;

        vector<int> s(n);
        for (int i = 0; i < n; ++i)
            cin >> s[i];

        int d, m;
        cin >> d >> m;

        int count = 0;
        for (int i = 0; i < n - m + 1; ++i)
        {
            int sum = 0;
            for (int j = i; j < i + m; ++j)
                sum += s[j];
            if (sum == d)
                ++count;
        }

        cout << count << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    SubarrayDivision::solve();
    return 0;
}
