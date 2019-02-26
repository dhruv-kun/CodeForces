#include <bits/stdc++.h>

using namespace std;

int main() {
    long long max_num = numeric_limits <long long> :: min();
    long long min_num = numeric_limits <long long> :: max();

    long long int n, max_freq = 0, min_freq = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long t; cin >> t;
        if (t > max_num) {
            max_num = t;
            max_freq = 1;
        }
        else if (t == max_num)
            max_freq++;
        if (t < min_num) {
            min_num = t;
            min_freq = 1;
        }
        else if (t == min_num)
            min_freq++;
    }
    long long diff = max_num - min_num;
    cout << diff << " ";
    if (diff == 0)
        cout << ((max_freq * (max_freq - 1)) / 2) << endl;
    else
        cout << (max_freq * min_freq) << endl;
    return 0;
}
