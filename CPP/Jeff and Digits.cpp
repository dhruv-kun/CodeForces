#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int five = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        t == 0 ? zero++ : five++;
    }
    while (five > 0 && (five * 5) % 9 != 0)
        five--;
    if (five > 0 && zero > 0) {
        while (five--)
            cout << 5;
        while(zero--)
            cout << 0;
    }
    else if (zero > 0) cout << 0;
    else cout << -1;
    cout << endl;
    return 0;
}
