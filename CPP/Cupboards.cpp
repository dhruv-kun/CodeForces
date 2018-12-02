#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int diff_left = 0, diff_right = 0;
    for (int i = 0; i < n; i++) {
        int t1, t2; cin >> t1 >> t2;
        diff_left += t1; diff_right += t2;
    }
    cout << min(n - diff_left, diff_left) + min(n - diff_right, diff_right) << endl;
    return 0;
}
