#include <bits/stdc++.h>

using namespace std;

int is_sorted(vector <int> &arr) {

    int n = arr.size();
    int min_index = n, min_val = numeric_limits <int> :: max();

    for (int i = n - 1; i >= 0; i--) {
        if (min_val >= arr[i])
            min_index = i, min_val = arr[i];
        else
            break;
    }
    int i = min_index;
    do {
        if (arr[(i + 1) % n] < arr[i])
            return -1;
        i = (i + 1) % n;
    } while ((i + 1) % n != min_index);
    return (n - min_index) % n;
}

int main() {
    int n; cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = is_sorted(arr);
    if (ans > -1)
        cout << ans << endl;
    else
        cout << ans << endl;
    return 0;
}
