#include <bits/stdc++.h>

using namespace std;


int main() {
    int m, s; cin >> m >> s;
    if (m * 9 < s)
        cout << -1 << " " << -1 << endl;
    else if (m > 1 && s == 0)
        cout << -1 << " " << -1 << endl;
    else {
        vector <int> max_num(m, s / m);
        int rem = s % m;
        for (int i = 0; i < m && rem; i++) {
            int f = min(9 - max_num[i], rem);
            max_num[i] += f;
            rem -= f;
        }
        int i = 0, j = m - 1;
        while (i < j) {
            int f = min(9 - max_num[i], max_num[j]);
            max_num[i] += f;
            max_num[j] -= f;
            if (max_num[i] == 9) i++;
            if (max_num[j] == 0) j--;
        }
        vector <int> min_num(m, s / m);
        rem = s % m;
        for (int i = m - 1; i >= 0 && rem; i--) {
            int f = min(9 - min_num[i], rem);
            min_num[i] += f;
            rem -= f;
        }

        i = 0, j = m - 1;
        while (i < j) {
            int f;

            if (i == 0)
                f = min(min_num[i] - 1, 9 - min_num[j]);
            else
                f = min(min_num[i], 9 - min_num[j]);
            min_num[j] += f;
            min_num[i] -= f;

            if (min_num[j] == 9) j--;
            if ((min_num[i] == 1 && i == 0) || min_num[i] == 0) i++;
        }
        for (int i: min_num)
            cout << i;
        cout << " ";

        for (int i: max_num)
            cout << i;
        cout << endl;

    }
    return 0;
}
