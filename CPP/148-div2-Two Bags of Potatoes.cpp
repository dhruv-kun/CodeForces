#include <bits/stdc++.h>

using namespace std;

vector <long long> factors(long long k, long long n, long long offset) {
    vector <long long> f;
    for (auto i = 0; i < n; i += k)
        if (i + offset <= n)
            f.push_back(i + offset);
    return f;
}

int main() {
    long long y, k, n;
    cin >> y >> k >> n;
    vector <long long> f = factors(k, n - y, k - y % k);
    if (f.empty())
        cout << -1;
    else
        for (auto i: f)
            cout << i << " ";
    cout << endl;
    return 0;
}
