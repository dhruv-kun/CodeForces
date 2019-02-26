#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        string s; cin >> s;
        sort(s.begin(), s.end());
        bool pal = true;
        auto it = s.begin();
        auto jt = s.rbegin();
        for (; it != s.end() && jt != s.rend(); it++, jt++) {
            if (*it != *jt) {
                pal = false;
                break;
            }
        }
        cout << (pal ? "-1" : s) << endl;
    }
    return 0;
}
