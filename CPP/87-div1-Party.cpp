#include <bits/stdc++.h>

using namespace std;

void assign_mgs(vector <int> &g, int s, unordered_set <int> &mgs) {
    mgs.insert(s);
    if (g[s] != -1)
    assign_mgs(g, g[s] - 1, mgs);
}

int solution(vector <unordered_set <int>> &managers, int n) {
    int groups = 0;
    unordered_set <int> people;
    for (int i = 0; i < n; i++)
        people.insert(i);
    vector <int> group;

    while (!people.empty()) {
        auto it = people.begin();
        group.push_back(*it);
        it = people.erase(it);
        while (it != people.end()) {
            bool dis = true;
            for (int v: group) {
                if (managers[*it].find(v) != managers[*it].end() ||
                    managers[v].find(*it) != managers[v].end()) {
                    dis = false;
                    break;
                }
            }
            if (dis) {
                group.push_back(*it);
                it = people.erase(it);
            }
            if (!dis)
                it++;
        }
        group.clear();
        groups++;
    }
    return groups;
}

int main() {
    int n; cin >> n;
    vector <int> graph(n);
    for (int i = 0; i < n; i++)
        cin >> graph[i];
    vector <unordered_set <int>> managers(n);
    for (int i = 0; i < n; i++) {
        assign_mgs(graph, i, managers[i]);
        managers[i].erase(i);
    }
    int groups = solution(managers, n);
    cout << groups << endl;
    return 0;
}
