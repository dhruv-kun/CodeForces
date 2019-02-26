#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    vector <int> cuts(3, 0);
    cin >> n;
    for (int i = 0; i < 3; i++)
        cin >> cuts[i];
    vector <int> arr(n + 1, numeric_limits <int> :: min());
    arr[0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j: cuts) {
            if (i >= j)
                arr[i] = max(arr[i - j] + 1, arr[i]);
        }
    }
    cout << arr[n] << endl;
    return 0;
}
