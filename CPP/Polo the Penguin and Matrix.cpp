#include <bits/stdc++.h>

using namespace std;

int countSteps(vector <int> &arr, int val, int diff) {
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (abs(arr[i] - val) % diff == 0)
            count += abs(arr[i] - val) / diff;
        else
            return -1;
    }
    return count;
}

int main() {
    int n, m, d, t;
    cin >> n >> m >> d;
    vector <int> arr;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> t;
            arr.push_back(t);
        }
    }
    int min_steps = numeric_limits <int> :: max();
    sort(arr.begin(), arr.end());
    if (arr.size() & 1)
        min_steps = countSteps(arr, arr[arr.size() / 2], d);
    else
        min_steps = min(countSteps(arr, arr[arr.size() / 2], d), countSteps(arr, arr[(arr.size() / 2) + 1], d));
    cout << min_steps << endl;
    return 0;
}
