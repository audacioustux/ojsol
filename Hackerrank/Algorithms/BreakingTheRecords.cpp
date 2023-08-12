#include <bits/stdc++.h>

using namespace std;

class BreakingTheRecords
{
public:
    static void solve(istream &cin = std::cin, ostream &cout = std::cout)
    {
        int n;
        cin >> n;

        int minScore, maxScore;
        cin >> minScore;
        maxScore = minScore;

        int minScoreBreaks = 0;
        int maxScoreBreaks = 0;

        for (int i = 1; i < n; ++i)
        {
            int score;
            cin >> score;

            if (score < minScore)
            {
                minScore = score;
                ++minScoreBreaks;
            }

            if (score > maxScore)
            {
                maxScore = score;
                ++maxScoreBreaks;
            }
        }

        cout << maxScoreBreaks << " " << minScoreBreaks << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    BreakingTheRecords::solve();
    return 0;
}
