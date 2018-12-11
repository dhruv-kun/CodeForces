#include <bits/stdc++.h>

using namespace std;

const long long int mod = 1e9 + 7;

int main() {
    string s; cin >> s;
    vector <long long int> as(1, 0);
    for (char c: s) {
        if (c == 'a' || c == 'b') {
            if (c == 'a')
                as[as.size() - 1]++;
            else
                as.push_back(0ll);
        }
    }
    long long int result = 1ll;
    for (auto i: as)
        result = (result * (i + 1l)) % mod;
    result = (result - 1l) % mod;
    cout << result << endl;
    return 0;
}
