#include <bits/stdc++.h>

using namespace std;

class DayOfTheProgrammer
{
public:
    static void solve(istream &cin = std::cin, ostream &cout = std::cout)
    {
        int y;
        cin >> y;

        if (y == 1918)
        {
            cout << "26.09.1918" << endl;
            return;
        }

        if (y < 1918)
        {
            if (y % 4 == 0)
                cout << "12.09." << y << endl;
            else
                cout << "13.09." << y << endl;
            return;
        }

        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
            cout << "12.09." << y << endl;
        else
            cout << "13.09." << y << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    DayOfTheProgrammer::solve();
    return 0;
}
