#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e8;
map <pair <pair<int, int>, pair<int, int>>, int> dp;

int placeArmy(int n1, int n2, int c1, int c2, int k1, int k2) {
    if (n1 == 0 && n2 == 0)
        return 1;

    if ((n1 == 0 && n2 > k2) || (n2 == 0 && n1 > k1))
        return 0;

    pair <pair <int, int>, pair<int, int>> key = make_pair(make_pair(n1, c1), make_pair(n2, c2));

    if (dp.find(key) != dp.end())
        return dp[key];

    int count = 0;
    if (n1 > 0 && c1 < k1)
        count += placeArmy(n1 - 1, n2, c1 + 1, 0, k1, k2);
    if (n2 > 0 && c2 < k2)
        count += placeArmy(n1, n2 - 1, 0, c2 + 1, k1, k2);

    dp[key] = count % MOD;
    return dp[key];
}

int main() {
    int n1, n2, k1, k2; cin >> n1 >> n2 >> k1 >> k2;
    cout << placeArmy(n1, n2, 0, 0, k1, k2) << endl;
    return 0;
}
