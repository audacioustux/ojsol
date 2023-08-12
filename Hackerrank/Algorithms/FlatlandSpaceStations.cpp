#include <bits/stdc++.h>

using namespace std;

class FlatlandSpaceStations
{
public:
    static void solve(istream &cin = std::cin, ostream &cout = std::cout)
    {
        int num_cities, num_stations;
        cin >> num_cities >> num_stations;

        vector<int> stations(num_stations);
        for (int i = 0; i < num_stations; i++)
            cin >> stations[i];

        sort(stations.begin(), stations.end());

        int max_distance = stations[0];

        for (int i = 1; i < num_stations; i++)
        {
            int distance = (stations[i] - stations[i - 1]) / 2;

            if (distance > max_distance)
                max_distance = distance;
        }

        int last_distance = num_cities - 1 - stations[num_stations - 1];

        if (last_distance > max_distance)
            max_distance = last_distance;

        cout << max_distance << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    FlatlandSpaceStations::solve();
    return 0;
}
