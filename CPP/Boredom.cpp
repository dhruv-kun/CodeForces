#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    const int limit = 1e5 + 5;
    vector <long long> arr(limit, 0);
    for (int i = 0; i < n; i++) {
        long long t; cin >> t;
        arr[t] += t;
    }
    for (int i = arr.size() - 4; i >= 0; i--)
        arr[i] = max(max(arr[i + 1], arr[i] + arr[i + 2]), arr[i] + arr[i + 3]);
    cout << arr[0] << endl;

    return 0;
}
