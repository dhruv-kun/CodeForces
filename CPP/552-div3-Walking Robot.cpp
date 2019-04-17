#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, b, max_a, a; cin >> n >> b >> max_a;
    a = max_a;
    vector <int> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    int max_walk = 0;
    for (int i = 0; i < n; i++) {
        if (a == 0 && b == 0)
            break;
        if (s[i]) {
            if (b > 0 && a < max_a)
                    a++, b--;
            else
                a--;
        }
        else {
            if (a > 0)
                a--;
            else if (b > 0)
                b--;
        }
        max_walk = i + 1;
    }
    cout << max_walk << endl;
    return 0;
}
