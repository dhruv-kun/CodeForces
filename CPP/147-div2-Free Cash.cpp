#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int prev = -1000, h, m, count = 1, min_cash = 0;
    for (int i = 0; i < n; i++) {
        cin >> h >> m;
        if ((h * 1000 + m) == prev)
            count += 1;
        else {
            min_cash = max(count, min_cash);
            count = 1;
        }
        prev = h * 1000 + m;
    }
    min_cash = max(min_cash, count);
    cout << min_cash << endl;
    return 0;
}
