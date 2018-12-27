#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    map <int, int> distinct;
    int i = 0, j = -1, l = -1, r = -1;
    int min_incl = n + 1;
    while (j < n) {
        if (distinct.size() < k)
            distinct[arr[++j]]++;
        else if (distinct.size() == k) {
            if (j - i + 1 < min_incl)
                l = i, r = j, min_incl = j - i + 1;
            auto it = distinct.find(arr[i++]);
            (it -> second)--;
            if (it -> second == 0)
                distinct.erase(it);
        }
    }
    if (min_incl != n + 1)
        l += 1, r += 1;
    cout << l << " " << r << endl;
    return 0;
}
