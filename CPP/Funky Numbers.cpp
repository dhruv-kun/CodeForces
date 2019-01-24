#include <bits/stdc++.h>

using namespace std;

int main() {

    int n; cin >> n;
    n *= 2;
    bool ans = false;
    int sqr = ceil(sqrt(n));

    for (int i = 1; i <= sqr; i++) {
        int l = 1, r = sqr, j;

        while (l <= r) {
            j = l + (r - l) / 2;
            int t = i * (i + 1) + j * (j + 1);
            if (t == n) {
                ans = true;
                break;
            }
            else if (t < n)
                l = j + 1;
            else
                r = j - 1;
        }
        if (ans)
            break;
    }
    cout << (ans ? "YES" : "NO") << endl;
    return 0;
}
