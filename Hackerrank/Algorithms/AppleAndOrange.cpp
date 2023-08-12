#include <bits/stdc++.h>

using namespace std;

class AppleAndOrange
{
public:
    static void solve(istream &cin = std::cin, ostream &cout = std::cout)
    {
        int s, t, a, b, m, n;
        cin >> s >> t >> a >> b >> m >> n;

        int apples = 0;
        for (int i = 0; i < m; ++i)
        {
            int d;
            cin >> d;
            if (a + d >= s && a + d <= t)
                ++apples;
        }

        int oranges = 0;
        for (int i = 0; i < n; ++i)
        {
            int d;
            cin >> d;
            if (b + d >= s && b + d <= t)
                ++oranges;
        }

        cout << apples << endl;
        cout << oranges << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    AppleAndOrange::solve();
    return 0;
}
