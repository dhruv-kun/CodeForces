#include <bits/stdc++.h>

using namespace std;

int main() {
    string num; cin >> num;
    bool deleted = false;
    for (int i = 0; i < num.size(); i++) {
        if (num[i] == '0' && !deleted) {
            deleted = true;
            continue;
        }
        if (i == num.size() - 1 && !deleted)
            continue;
        cout << num[i];
    }
    cout << endl;
    return 0;
}
