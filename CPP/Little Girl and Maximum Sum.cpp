#include <bits/stdc++.h>

using namespace std;

struct BITree {
    vector <int> arr;
    int n;

    BITree(int _n) {
        arr.resize(_n + 1, 0);
        n = _n;
    }
    void update(int idx, int val) {
        idx += 1;
        while (idx <= n) {
            arr[idx] += val;
            idx += idx & (-idx);
        }
    }
    int getval(int idx) {
        int sum = 0;
        idx += 1;
        while (idx > 0) {
            sum += arr[idx];
            idx -= (idx & (-idx));
        }
        return sum;
    }
};

int main() {
    int n, q; cin >> n >> q;
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());

    BITree bit = BITree(n);
    for (int i = 0; i < q; i++) {
        int l, r; cin >> l >> r;
        bit.update(l - 1, 1);
        bit.update(r, -1);
    }

    vector <int> freq(n);
    for (int i = 0; i < n; i++)
        freq[i] = bit.getval(i);
    sort(freq.begin(), freq.end());

    long long result = 0;
    for (int i = 0; i < n; i++)
        result += (long long)freq[i] * arr[i];
    cout << result << endl;
    return 0;
}
