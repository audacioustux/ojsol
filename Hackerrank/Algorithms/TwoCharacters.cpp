#include <bits/stdc++.h>

using namespace std;

class TwoCharacters
{
public:
    static void solve(istream &cin = std::cin, ostream &cout = std::cout)
    {
        int n;
        cin >> n;

        cin.ignore();

        set<pair<char, char>> P;

        string str;

        getline(cin, str);
        for (int i = 0; i < str.length(); i++)
            for (int j = i + 1; j < str.length(); j++)
                P.insert(make_pair(str[i], str[j]));

        int mx = 0;
        for (auto i : P)
        {
            char s[] = {i.first, i.second};
            int len = 0, pos = 0;
            for (char j : str)
            {
                if (j == s[(pos + 1) % 2])
                {
                    len = 0;
                    break;
                }
                if (j == s[pos])
                {
                    len++;
                    pos = (pos + 1) % 2;
                }
            }
            mx = max(mx, len);
        }

        cout << mx;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    TwoCharacters::solve();
    return 0;
}
