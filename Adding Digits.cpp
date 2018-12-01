#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, n; cin >> a >> b >> n;
    bool exists = true;

    a = a * 10;
    if ((b - (a % b)) / 10 == 0)
        a = a + b - (a % b);

    if (a % b == 0) {
        cout << a;
        for (int i = 0; i < n - 1; i++)
            cout << 0;
    }
    else
        cout << -1;
    cout << endl;
    return 0;
}
