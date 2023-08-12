#include <bits/stdc++.h>

using namespace std;

class BillDivision
{
public:
    static void solve(istream &cin = std::cin, ostream &cout = std::cout)
    {
        int n, k;
        cin >> n >> k;

        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            int bill;
            cin >> bill;
            if (i != k)
                sum += bill;
        }

        int b;
        cin >> b;

        if (sum / 2 == b)
            cout << "Bon Appetit" << endl;
        else
            cout << b - sum / 2 << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    BillDivision::solve();
    return 0;
}