#include <bits/stdc++.h>

using namespace std;

class GradingStudents
{
public:
    static void solve(istream &cin = std::cin, ostream &cout = std::cout)
    {
        int n;
        cin >> n;

        while (n--)
        {
            int grade;
            cin >> grade;

            if (grade < 38)
                cout << grade << endl;

            int nextMultipleOfFive = (grade / 5 + 1) * 5;
            if (nextMultipleOfFive - grade < 3)
                cout << nextMultipleOfFive << endl;
            else
                cout << grade << endl;
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    GradingStudents::solve();
    return 0;
}