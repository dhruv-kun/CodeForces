#include <bits/stdc++.h>

using namespace std;

vector <bool> visited;

void min_cost_dfs(vector <vector <int>> &graph, vector <long long> &costs, int start, long long &cost) {
    cost = min(cost, costs[start]);
    visited[start] = true;
    for (int v: graph[start])
        if (!visited[v])
            min_cost_dfs(graph, costs, v, cost);
}


int main() {
    const long long int inf = numeric_limits <long long int> :: max();

    int n, m; cin >> n >> m;
    vector <long long> costs(n);
    visited = vector <bool>(n, false);
    for (int i = 0; i < n; i++)
        cin >> costs[i];
    vector <vector <int>> graph(n);
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        graph[u - 1].push_back(v - 1);
        graph[v - 1].push_back(u - 1);
    }
    long long int total_cost = 0, cost;

    for (int s = 0; s < n; s++) {
        cost = inf;
        if (!visited[s]) {
            min_cost_dfs(graph, costs, s, cost);
            total_cost += cost;
        }
    }
    cout << total_cost << endl;
    return 0;
}
