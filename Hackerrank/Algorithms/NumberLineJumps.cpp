#include <bits/stdc++.h>

using namespace std;

class NumberLineJumps
{
public:
    static void solve(istream &cin = std::cin, ostream &cout = std::cout)
    {
        int x1, v1, x2, v2;
        cin >> x1 >> v1 >> x2 >> v2;

        if (v1 == v2)
        {
            if (x1 == x2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            return;
        }

        if ((x1 - x2) % (v2 - v1) == 0 && (x1 - x2) / (v2 - v1) > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    NumberLineJumps::solve();
    return 0;
}