#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector <int> skill_level(n);
    for (int i = 0; i < n; i++)
        cin >> skill_level[i];
    sort(skill_level.begin(), skill_level.end());
    int min_probs = 0;
    for (int i = 0; i < n; i += 2)
        min_probs += skill_level[i + 1] - skill_level[i];
    cout << min_probs << endl;
    return 0;
}
