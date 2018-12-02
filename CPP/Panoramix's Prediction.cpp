#include <bits/stdc++.h>

using namespace std;

bool isPrime(int p) {
    if (p == 2)
        return true;
    if (p % 2 == 0)
        return false;
    for (int i = 3; i <= int(sqrt(p)) + 1; i += 2)
        if (p % i == 0 && p != i)
            return false;
    return true;
}

int main() {
    int n, m; cin >> n >> m;
    int p = 0;
    for (int i = n + 1; i <= m; i++) {
        if (isPrime(i)) {
            p = i;
            break;
        }
    }
    cout << (p != m ? "NO" : "YES") << endl;
    return 0;
}
