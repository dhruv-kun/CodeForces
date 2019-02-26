#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int l, r; cin >> l >> r;
        if (l == 1)
            cout << l << " " << r << endl;
        else {
            cout << l << " " << 2 * l << endl;
        }
    }
    return 0;
}
