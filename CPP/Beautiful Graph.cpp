#include <bits/stdc++.h>

using namespace std;


vector <bool> visited;
vector <bool> color;
vector <vector <int>> graph;

set <int> island;

bool dfs(int source) {
    island.insert(source);
    visited[source] = true;
    for (auto v = graph[source].begin(); v != graph[source].end(); v++) {
        if (!visited[*v]) {
            color[*v] = !color[source];
            if (!dfs(*v))
                return false;
        }
        else if (color[*v] == color[source])
            return false;
    }
    return true;
}

long long int powm(long long int a, long long int b, long long int mod) {
    if (b == 0)
        return 1;
    long long int p = powm(a, b / 2, mod);
    p = (p * p) % mod;
    if (b & 1)
        p = (p * a) % mod;
    return p;
}

int main() {
    int t; cin >> t;
    const long long int mod = 998244353;
    while(t--) {
        int n, m; cin >> n >> m;
        if (m == 0) {
            cout << powm(3, n, mod) << endl;
            continue;
        }
        graph.clear(); graph.resize(n, vector <int>());
        visited.clear(); visited.resize(n, false);
        color.clear(); color.resize(n, false);
        for (int i = 0; i < m; i++) {
            int u, v; cin >> u >> v;
            graph[u - 1].push_back(v - 1);
            graph[v - 1].push_back(u - 1);
        }
        long long red = 0, result = 1;
        bool ans = true;
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                island.clear();
                if (!dfs(i)) {
                    ans = false;
                    break;
                }
                else {
                    red = 0;
                    for (auto i: island)
                        if (color[i]) red++;
                    long long curr = (powm(2, red, mod) + powm(2, island.size() - red, mod)) % mod;
                    result *= curr;
                    result %= mod;
                }
            }
        }

        cout << (ans ? result : 0) << endl;
    }
    return 0;
}
