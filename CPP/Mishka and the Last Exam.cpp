#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int m = n / 2;
    vector <long long int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];
    vector <long long int> a1, a2;
    long long int diff = 0;
    a1.push_back(numeric_limits <long long> :: min());
    a2.push_back(numeric_limits <long long> :: max());
    for (int i = 0; i < m; i++) {
        if (b[i] - diff > a2.back())
            diff = b[i] - a2.back();
        a1.push_back(diff);
        a2.push_back(b[i] - diff);
    }
    for (int i = 1; i < a1.size(); i++)
        cout << a1[i] << " ";
    for (int i = a2.size() - 1; i > 0; i--)
        cout << a2[i] << " ";
    cout << endl;
    return 0;
}
