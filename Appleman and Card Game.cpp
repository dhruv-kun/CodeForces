#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int n, k; cin >> n >> k;
    vector <long long int> freq(26, 0);
    for (int i = 0; i < n; i++) {
        char c; cin >> c;
        freq[c - 'A']++;
    }
    sort(freq.begin(), freq.end());
    long long int coins = 0;
    for (auto it = freq.rbegin(); it != freq.rend(); it++) {
        coins += min(k, *it) * min(k, *it);
        k -= min(k, *it);
        if (k == 0)
            break;
    }
    cout << coins << endl;
    return 0;
}
