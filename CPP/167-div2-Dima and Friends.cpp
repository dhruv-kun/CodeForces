#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int fingers = 0;
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        fingers += t;
    }
    int ways = 0;
    for (int i = 1; i <= 5; i++)
        ways += ((fingers + i) % (n + 1) != 1);
    cout << ways << endl;
    return 0;
}
