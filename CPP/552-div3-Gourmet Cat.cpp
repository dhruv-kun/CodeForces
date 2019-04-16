#include <bits/stdc++.h>

using namespace std;

int calc_days(vector <long int> ration, vector <int> &weekdays, int s) {
    int days = 0;
    while (ration[weekdays[s]] > 0) {
        ration[weekdays[s]] -= 1;
        s = (s + 1) % 7;
        days += 1;
    }
    return days;
}

int main() {
    vector <int> weekdays = {0, 1, 2, 0, 2, 1, 0}, ration_ratio = {3, 2, 2};
    vector <long int> ration(3);
    for (int i = 0; i < 3; i++)
        cin >> ration[i];
    long int min_sup = numeric_limits <long int> :: max();
    for (int i = 0; i < 3; i++)
        min_sup = min(min_sup, ration[i] / ration_ratio[i]);

    for (int i = 0; i < 3; i++)
        ration[i] -= ration_ratio[i] * min_sup;

    long int max_days = 0, days = 7 * min_sup;
    for (int i = 0; i < 7; i++) {
        max_days = max(max_days, days + calc_days(ration, weekdays, i));
    }
    cout << max_days << endl;
    return 0;
}
