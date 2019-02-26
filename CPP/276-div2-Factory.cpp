#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, m; cin >> a >> m;
    set <int> remainders;
    bool ans = false;
    while (true) {
        int rem = a % m;
        if (rem == 0 || remainders.find(rem) != remainders.end()) {
            ans = (rem == 0);
            break;
        }
        remainders.insert(rem);
        a = (a + rem) % m;
    }
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}
