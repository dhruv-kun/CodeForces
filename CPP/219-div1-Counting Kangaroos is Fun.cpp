#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector <int> bellysize(n);
    for (int i = 0; i < n; i++)
        cin >> bellysize[i];
    sort(bellysize.begin(), bellysize.end());


    int ans = n, j = n / 2;
    for (int i = 0; i < n / 2; i++) {
        while (j < n) {
            if (bellysize[i] * 2 <= bellysize[j]) {
                j += 1; ans -= 1;
                break;
            }
            else j++;
        }
        if (j == n)
            break;
    }
    cout << ans << endl;
    return 0;
}
