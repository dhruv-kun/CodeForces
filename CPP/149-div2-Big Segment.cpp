#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector <int> left(n), right(n);
    for (int i = 0; i < n; i++)
        cin >> left[i] >> right[i];
    int min_v = *min_element(left.begin(), left.end());
    int max_v = *max_element(right.begin(), right.end());
    auto it = left.begin();
    int ans = -1;
    while ((it = find(it, left.end(), min_v)) != left.end()) {
        if (right[it - left.begin()] == max_v) {
            ans = it - left.begin() + 1;
            break;
        }
        else
            it++;
    }
    cout << ans << endl;
    return 0;
}
