#include <bits/stdc++.h>

using namespace std;

class MigratoryBirds
{
public:
    static void solve(istream &cin = std::cin, ostream &cout = std::cout)
    {
        int n;
        cin >> n;

        vector<int> types(5);
        for (int i = 0; i < n; ++i)
        {
            int type;
            cin >> type;
            ++types[type - 1];
        }

        int maxType = 0;
        for (int i = 1; i < 5; ++i)
            if (types[i] > types[maxType])
                maxType = i;

        cout << maxType + 1 << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    MigratoryBirds::solve();
    return 0;
}
