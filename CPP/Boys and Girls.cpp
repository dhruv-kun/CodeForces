#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
    int n, m; cin >> n >> m;
    string ans;
    if (n == m) {
        for (int i = 0; i < n; i++)
            cout << "BG";
    }
    else if (n > m) {
        for (int i = 0; i < m; i++)
            cout << "BG";
        for (int i = 0; i < n - m; i++)
            cout << "B";
    }
    else {
        for (int i = 0; i < n; i++)
            cout << "GB";
        for (int i = 0; i < m - n; i++)
            cout << "G";
    }
    cout << ans << endl;
    return 0;
}
