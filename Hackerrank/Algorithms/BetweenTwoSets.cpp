#include <bits/stdc++.h>
#include <numeric>

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

        int a_lcm = reduce(a.begin(), a.end(), 1, lcm<int, int>);
        int b_gcd = reduce(b.begin(), b.end(), 0, gcd<int, int>);

        int count = 0;
        for (int i = a_lcm; i <= b_gcd; i += a_lcm)
            if (b_gcd % i == 0)
                ++count;

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
