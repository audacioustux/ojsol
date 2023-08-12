#include <bits/stdc++.h>

using namespace std;

class BetweenTwoSets
{
public:
    static void solve(istream &cin = std::cin, ostream &cout = std::cout)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        for (int &ai : a)
            cin >> ai;

        vector<int> b(m);
        for (int &bi : b)
            cin >> bi;

        int count = 0;
        for (int x = 1; x <= 100; ++x)
        {
            bool ok = true;
            for (int ai : a)
                if (x % ai != 0)
                {
                    ok = false;
                    break;
                }
            if (!ok)
                continue;
            for (int bi : b)
                if (bi % x != 0)
                {
                    ok = false;
                    break;
                }
            if (ok)
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
    BetweenTwoSets::solve();
    return 0;
}
