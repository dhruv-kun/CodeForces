#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, r, avg, total = 0, essays = 0;
    cin >> n >> r >> avg;
    avg *= n;
    vector <pair <long long, long long>> grades(n);
    for (int i = 0; i < n; i++) {
        cin >> grades[i].second >> grades[i].first;
        total += grades[i].second;
    }
    long long need = avg - total;
    sort(grades.begin(), grades.end());
    for (int i = 0; i < n && need > 0; i++) {
        long long s, e;
        tie(e, s) = grades[i];
        if (s < r) {
            essays += min(need, r - s) * e;
            need -= min(need, r - s);
        }
    }
    cout << essays << endl;
    return 0;
}
