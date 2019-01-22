#include <bits/stdc++.h>

using namespace std;

int main() {
    int w, h; cin >> w >> h;

    vector <int> mountain(101, 0);
    for (int i = 0; i < 2; i++) {
        int u, d; cin >> u >> d;
        mountain[d] = u;
    }

    for (int i = h; i >= 0; i--) {
        w += i;
        w = max(0, w - mountain[i]);
    }
    cout << w << endl;
    return 0;
}
