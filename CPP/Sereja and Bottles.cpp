#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector <int> a, b;
    for (int i = 0; i < n; i++) {
        int t1, t2; cin >> t1 >> t2;
        a.push_back(t1); b.push_back(t2);
    }
    int cant_open = 0;
    for (int i = 0; i < n; i++) {
        auto it = find(b.begin(), b.end(), a[i]);
        if (it == b.end() || ((it - b.begin()) == i && find(it + 1, b.end(), a[i]) == b.end()))
            cant_open += 1;
    }
    cout << cant_open << endl;
    return 0;
}
