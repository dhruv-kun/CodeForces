#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int min_val, max_val, t, amazing = 0;
    cin >> t; min_val = max_val = t;

    for (int i = 1; i < n; i++) {
        cin >> t;
        if (t < min_val || t > max_val) {
            amazing++;
            min_val = min(t, min_val);
            max_val = max(t, max_val);
        }
    }
    cout << amazing << endl;
    return 0;
}
