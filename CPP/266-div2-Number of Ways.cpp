#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector <long long> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    long long s = accumulate(arr.begin(), arr.end(), 0ll);
    if (s % 3 == 0) {
        vector <int> cnts(n, 0), sums(n + 2, 0);
        long long suffix_sum = 0;
        for (int i = n - 1; i >= 0; i--) {
            suffix_sum += arr[i];
            cnts[i] = suffix_sum == (s / 3);
            sums[i] = sums[i + 1] + cnts[i];
        }
        long long prefix_sum = 0, cnt = 0;
        for (int i = 0; i < n; i++) {
            prefix_sum += arr[i];
            if (prefix_sum == (s / 3))
                cnt += sums[i + 2];
        }
        cout << cnt << endl;
    }
    else
        cout << 0 << endl;
    return 0;
}
