#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector <long long int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    long long int ans = 0;
    for (int i = 0; i < n; i++)
        ans += abs(i + 1 - arr[i]);
    cout << ans << endl;
    return 0;
}
