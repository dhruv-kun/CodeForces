#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int n, s;
    cin >> n >> s;
    vector <long long int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    long long diff = 0;
    for (int i = 1; i < n; i++)
        diff += arr[i] - arr[0];
    if (diff >= s)
        cout << arr[0] << endl;
    else {
        s -= diff;
        if (arr[0] * n < s)
            cout << -1 << endl;
        else {
            long long ans = arr[0] - s / n;
            if (s % n != 0)
                ans--;
            cout << ans << endl;
        }
    }
    return 0;
}
