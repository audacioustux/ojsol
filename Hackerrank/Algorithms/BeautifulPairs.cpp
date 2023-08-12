#include <bits/stdc++.h>

using namespace std;

class BeautifulPairs
{
public:
    static void solve(istream &cin = std::cin, ostream &cout = std::cout)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int &ai : a)
            cin >> ai;

        vector<int> b(n);
        for (int &bi : b)
            cin >> bi;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int i = 0, j = 0;
        int pairs = 0;
        while (i < n && j < n)
        {
            if (a[i] == b[j])
            {
                ++pairs;
                ++i;
                ++j;
            }
            else if (a[i] < b[j])
                ++i;
            else
                ++j;
        }

        if (pairs == n)
            --pairs;
        else
            ++pairs;

        cout << pairs << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    BeautifulPairs::solve();
    return 0;
}