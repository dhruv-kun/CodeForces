#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ones = 0; cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        ones += arr[i];
    }

    if (ones == n)
        cout << ones - 1 << endl;
    else {
        int sum = 0, max_sum = 0;
        for (int i = 0; i < n; i++) {
            sum += !arr[i] ? 1 : -1;
            sum = max(0, sum);
            max_sum = max(sum, max_sum);
        }
        cout << ones + max_sum << endl;
    }
    return 0;
}
