#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int t25 = 0, t50 = 0, t100 = 0;
    bool ans = true;
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        switch (t) {
            case 25:
                t25++;
                break;
            case 50:
                if (t25 > 0) {
                    t50++; t25--;
                }
                else
                    ans = false;
                break;
            case 100:
                if (t50 > 0 && t25 > 0) {
                    t100++; t50--; t25--;
                }
                else if (t25 >= 3) {
                    t25 -= 3;
                }
                else
                    ans = false;
        }
    }
    cout << (ans ? "YES" : "NO") << endl;
    return 0;
}
