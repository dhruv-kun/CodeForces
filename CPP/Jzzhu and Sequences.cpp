#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x, y, n, res;
    cin >> x >> y >> n;

    if ((n - 1) % 3 == 0) {
        if (((n - 1) / 3 + 1) % 2 == 0)
            res = -x;
        else
            res = x;
    }
    else if ((n - 2) % 3 == 0) {
        if (((n - 2) / 3 + 1) % 2 == 0)
            res = -y;
        else
            res = y;
    }
    else if ((n - 3) % 3 == 0) {
        if (((n - 3) / 3 + 1) % 2 == 0)
            res = -(y - x);
        else
            res = y - x;
    }
    res %= (long long)(1e9 + 7);
    if (res < 0)
        res += 1e9 + 7;
    cout << res << endl;
    return 0;

}
