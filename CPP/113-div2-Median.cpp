#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x; cin >> n >> x;
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (find(arr.begin(), arr.end(), x) == arr.end())
        arr.push_back(x);
    sort(arr.begin(), arr.end());
    while (true) {
        int med = (arr.size() + 1) / 2;
        if (arr[med - 1] == x)
            break;
        else if (arr[med - 1] > x)
            arr.insert(arr.begin(), arr.front());
        else if (arr[med - 1] < x)
            arr.push_back(arr.back());
    }
    cout << arr.size() - n << endl;
    return 0;
}
