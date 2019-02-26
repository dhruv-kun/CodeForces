#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, count = 0; cin >> n;

    for (int i = 0; i < n; i++) {
        int s = 0, t;
        for (int j = 0; j < 3; j++) {
            cin >> t;
            s += t;
        }
        count += (s >= 2);
    }
    cout << count << endl;
    return 0;
}
