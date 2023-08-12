#include <bits/stdc++.h>

using namespace std;

class SuperReducedString
{
public:
    static void solve(istream &cin = std::cin, ostream &cout = std::cout)
    {
        string s;
        cin >> s;

        stack<char> st;
        for (char c : s)
        {
            if (st.empty() || st.top() != c)
                st.push(c);
            else
                st.pop();
        }

        if (st.empty())
            cout << "Empty String" << endl;
        else
        {
            string ans;
            while (!st.empty())
            {
                ans += st.top();
                st.pop();
            }
            reverse(ans.begin(), ans.end());
            cout << ans << endl;
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    SuperReducedString::solve();
    return 0;
}