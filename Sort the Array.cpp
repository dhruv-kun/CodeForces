#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector <int> array(n);
    for (int i = 0; i < n; i++)
        cin >> array[i];
    int hill_idx = 0, valley_idx = n - 1;
    for (int i = 1; i < n; i++) {
        if (array[i] > array[hill_idx])
            hill_idx = i;
        else
            break;
    }
    for (int i = n - 2; i >= 0; i--) {
        if (array[i] < array[valley_idx])
            valley_idx= i;
        else
            break;
    }

    if (hill_idx > valley_idx) {
        cout << "yes" << endl << "1 1";
    }
    else {
        bool sorted = true;
        for (int i = 1; i < hill_idx; i++)
            sorted = sorted && (array[i - 1] < array[i]);
        for (int i = valley_idx + 1; i < n - 1; i++)
            sorted = sorted && (array[i] < array[i + 1]);
        for (int i = valley_idx; i > hill_idx; i--)
            sorted = sorted && (array[i] < array[i - 1]);

        if (hill_idx > 0)
            sorted = sorted && array[hill_idx - 1] < array[valley_idx];
        if (valley_idx < n - 1)
            sorted = sorted && (array[hill_idx] < array[valley_idx + 1]);

        if (sorted)
            cout << "yes" << endl << hill_idx + 1 << " " << valley_idx + 1;
        else
            cout << "no";
    }
    cout << endl;

    return 0;
}
