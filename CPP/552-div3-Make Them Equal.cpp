#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    set <int> s;
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        s.insert(t);
    }
    switch (s.size()) {
        case 1: {
            cout << 0 << endl;
            break;
        }
        case 2: {
            int p = *s.rbegin() - *s.begin();
            if (p % 2 == 0)
                cout << (p / 2);
            else
                cout << p;
            cout << endl;
            break;
        }
        case 3: {
            int p = *s.rbegin() - *s.begin(), l = p / 2;
            auto it = s.begin();
            it++;
            if (p % 2 == 0 && (*it - l) == *s.begin() && (*it + l) == *s.rbegin())
                cout << l << endl;
            else
                cout << -1 << endl;
            break;
        }
        default: {
            cout << -1 << endl;
        }
    }
    return 0;
}
