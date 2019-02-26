#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector <int> same(n);
    for (int i = 0; i < n; i++) {
        cin >> same[i];
        same[i] = n - same[i];
    }
    map <int, vector <int>> counter;
    for (int i = 0; i < n; i++)
        counter[same[i]].push_back(i);

    vector <int> seq(n, 0);
    bool ans = true;
    int type = 0;
    for (auto it: counter) {
        if (it.second.size() % it.first != 0) {
            ans = false;
            break;
        }
        while (!it.second.empty()) {
            type++;
            for (int j = 0; j < it.first; j++) {
                seq[it.second.back()] = type;
                it.second.pop_back();
            }
        }
    }
    if (ans && seq.back() <= n) {
        cout << "Possible" << endl;
        for (int i: seq)
            cout << i << " ";
        cout << endl;
    }
    else
        cout << "Impossible" << endl;
    return 0;
}
