#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, pos = 0, neg = 0; cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
    }
    int ans = 0;
    if (pos >= n / 2.0)
        ans++;
    else if (neg >= n / 2.0)
        ans--;
    cout << ans << endl;
    return 0;
}
