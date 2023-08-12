#include <bits/stdc++.h>

using namespace std;

class SalesByMatch
{
public:
    static void solve(istream &cin = std::cin, ostream &cout = std::cout)
    {
        int n;
        cin >> n;

        unordered_map<int, int> socks;
        while (n--)
        {
            int sock;
            cin >> sock;
            ++socks[sock];
        }

        int pairs = 0;
        for (auto &sock : socks)
            pairs += sock.second / 2;

        cout << pairs << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    SalesByMatch::solve();
    return 0;
}
