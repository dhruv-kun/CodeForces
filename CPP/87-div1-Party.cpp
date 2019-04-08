#include <bits/stdc++.h>

using namespace std;

int depth(vector <vector <int>> &graph, int root) {
    if (graph[root].empty())
        return 1;
    int max_depth = 0;
    for (int v: graph[root])
        max_depth = max(max_depth, depth(graph, v));
    return max_depth + 1;
}

int main() {
    int n; cin >> n;
    vector <vector <int>> trees(n);
    vector <int> roots;
    for (int i = 0; i < n; i++) {
        int v; cin >> v;
        if (v != -1)
            trees[v - 1].push_back(i);
        else
            roots.push_back(i);
    }
    int max_depth = 0;
    for (int root: roots)
        max_depth = max(max_depth, depth(trees, root));
    cout << max_depth << endl;
    return 0;
}
