#include <bits/stdc++.h>

using namespace std;

int main() {
    const int inf = 1e9 + 7;

    int n, m, k; cin >> n >> m >> k;
    vector <vector <int>> roads(m, vector <int>(3));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < 3; j++)
            cin >> roads[i][j];
    unordered_set <int> flour_storages;
    for (int i = 0; i < k; i++) {
        int t; cin >> t;
        flour_storages.insert(t);
    }

    int min_rubles = inf;
    for (int i = 0; i < m; i++) {
        bool a = flour_storages.find(roads[i][0]) == flour_storages.end();
        bool b = flour_storages.find(roads[i][1]) == flour_storages.end();

        if (a ^ b)
            min_rubles = min(min_rubles, roads[i][2]);
    }
    if (min_rubles == inf)
        min_rubles = -1;
    cout << min_rubles << endl;
    return 0;
}
