#include <bits/stdc++.h>

using namespace std;

void minimize_cost(vector <vector <pair <int, int>>> &graph, int start, vector <long long int> &costs, int c) {
    for (pair <int, int> v: graph[start]) {
        if (costs[v.first] > c + v.second) {
            costs[v.first] = c + v.second;
            minimize_cost(graph, v.first, costs, c + v.second);
        }
    }
}


int main() {
    const int inf = 1e9 + 7;

    int n, m, k; cin >> n >> m >> k;
    vector <vector <pair <int, int>>> graph(n);
    for (int i = 0; i < m; i++) {
        int u, v, w; cin >> u >> v >> w;
        graph[u - 1].push_back(make_pair(v - 1, w));
        graph[v - 1].push_back(make_pair(u - 1, w));
    }
    vector <bool> flour_storages(n);
    for (int i = 0; i < k; i++) {
        int t; cin >> t;
        flour_storages[t - 1] = true;
    }


    vector <long long int> costs(n, inf);
    for (int i = 0; i < n; i++)
        if (flour_storages[i])
            costs[i] = 0;
    for (int i = 0; i < n; i++) {
        if (flour_storages[i])
            minimize_cost(graph, i, costs, 0);
    }
    int min_rubles = inf;
    for (int i = 0; i < n; i++) {
        if (!flour_storages[i] && costs[i] < min_rubles)
            min_rubles = costs[i];
    }
    if (min_rubles == inf)
        min_rubles = -1;
    cout << min_rubles << endl;
    return 0;
}
