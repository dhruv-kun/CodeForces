#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <long long> x14(4);
    for (int i = 0; i < 4; i++)
        cin >> x14[i];
    sort(x14.begin(), x14.end());
    for (int i = 0; i < 3; i++)
        cout << x14.back() - x14[i] << " ";
    cout << endl;
    return 0;
}
