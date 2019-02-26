#include <bits/stdc++.h>

using namespace std;

string checkAffixs(map <int, vector <pair <string, int>>> &affixs, string s, int n) {
    string ans(2 * n - 2, 'A');
    for (int i = 1; i <= n - 1; i++) {
        if (affixs[i][0].first == s.substr(0, i) &&
            affixs[i][1].first == s.substr(n - i, n)) {
            ans[affixs[i][0].second] = 'P';
            ans[affixs[i][1].second] = 'S';
        }
        else if (affixs[i][1].first == s.substr(0, i) &&
            affixs[i][0].first == s.substr(n - i, n)) {
            ans[affixs[i][0].second] = 'S';
            ans[affixs[i][1].second] = 'P';
        }
        else
            return "";
    }
    return ans;
}

int main() {
    int n; cin >> n;
    map <int, vector <pair <string, int>>> affixs;
    for (int i = 0; i < 2 * n - 2; i++) {
        string s; cin >> s;
        affixs[s.size()].push_back(make_pair(s, i));
    }
    string ans;
    for (int i = 0; i < 2 && ans.empty(); i++) {
        string s = affixs[1][i].first + affixs[n - 1][0].first;
        ans = checkAffixs(affixs, s, n);
    }
    for (int i = 0; i < 2 && ans.empty(); i++) {
        string s = affixs[n - 1][0].first + affixs[1][i].first;
        ans = checkAffixs(affixs, s, n);
    }
    cout << ans << endl;
    return 0;
}
