#include <bits/stdc++.h>

using namespace std;

vector <bool> visited;

void isCyclic(vector <vector <int>> &graph, int start, bool &twoDegrees) {
    if (!visited[start]) {
        visited[start] = true;
        twoDegrees = twoDegrees && (graph[start].size() == 2);
        for (int v: graph[start])
            isCyclic(graph, v, twoDegrees);
    }
}


int main() {
    int n, m; cin >> n >> m;
    vector <vector <int>> graph(n);
    visited = vector <bool> (n, false);

    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        graph[u - 1].push_back(v - 1);
        graph[v - 1].push_back(u - 1);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        bool twoDegrees = true;
        if (!visited[i]) {
            isCyclic(graph, i, twoDegrees);
            cnt += twoDegrees;
        }
    }
    cout << cnt << endl;
    return 0;
}
