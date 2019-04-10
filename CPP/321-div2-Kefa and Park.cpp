#include <bits/stdc++.h>

using namespace std;

vector <bool> visited;

int count_restaurants(vector <vector <int>> &graph, vector <int> &cats_vertices, int m, bool last_cat, int cats, int root) {
    visited[root] = true;
    if (cats_vertices[root]) {
        cats += 1;
        if (m < cats)
            return 0;
        last_cat = true;
    }
    else
        cats = 0, last_cat = false;
    if (graph[root].size() == 1 && root != 1)
        return 1;

    int count = 0, m_mod = 0;
    for (int v: graph[root])
        if (!visited[v])
            count += count_restaurants(graph, cats_vertices, m, last_cat, cats, v);

    return count;
}

int main() {
    int n, m; cin >> n >> m;
    vector <int> cats_vertices(n + 1, false);
    visited = vector <bool> (n + 1, false);
    for (int i = 1; i <= n; i++)
        cin >> cats_vertices[i];

    vector <vector <int>> graph(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int u, v; cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int restaurants = count_restaurants(graph, cats_vertices, m, false, 0, 1);
    cout << restaurants << endl;
    return 0;
}
