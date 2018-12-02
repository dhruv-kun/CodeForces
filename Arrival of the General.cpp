#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector <int> soldiers(n);
    for (int i = 0; i < n; i++)
        cin >> soldiers[i];
    int min_max_idx = 0, max_min_idx = n - 1;
    int min_val = *min_element(soldiers.begin(), soldiers.end());
    int max_val = *max_element(soldiers.begin(), soldiers.end());
    for (int i = 0, j = n - 1; i < n && j >= 0; i++, j--) {
        if (soldiers[i] == min_val)
            min_max_idx = i;
        if (soldiers[j] == max_val)
            max_min_idx = j;
    }
    int ans = max_min_idx + n - 1 - min_max_idx;
    if (min_max_idx < max_min_idx)
        ans--;
    cout << ans << endl;
    return 0;
}
