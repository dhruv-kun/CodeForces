#include <bits/stdc++.h>

using namespace std;

long long maxLCM(long long n) {
    long long a = n--, b = 1, c = 1;
    while ((b == 1 || c == 1) && n > 1) {
        while (__gcd(a, n) != 1)
            n--;
        b = n--;
        while (__gcd(a, n) != 1 || __gcd(b, n) != 1)
            n--;
        c = n;
    }
    return a * b * c;
}

int main() {
    int n; cin >> n;
    long long lcm = 1;
    for (int i = n; i >= 1; i--) {
        lcm = max(lcm, maxLCM(i));
    }
    cout << lcm << endl;
    return 0;
}
